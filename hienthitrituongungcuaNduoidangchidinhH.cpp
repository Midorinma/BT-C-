#include<iostream>
#include<math.h>
using namespace std;
int Thaplucphan(int n){
	
	int tp=1,i=0;
	int a[20];
	while(n>0){
		a[tp]=n%16;
		tp++;
		n/=16;
	}
	for(i=tp;i>0;i--){
		if(a[i]<10){
			cout<<a[i];
		}
		else{
			switch(a[i]){
				case 10: cout<<"A"; break;
				case 11: cout<<"B"; break;
				case 12: cout<<"C"; break;
				case 13: cout<<"D"; break;
				case 14: cout<<"E"; break;
				case 15: cout<<"F"; break;
			}
		}
	}
}
int Batphan(int n){
	int box=0,p=0;
	while(n>0){
		box+=n%8*pow(10,p);
		p++;
		n/=8;
	}
	return box;
}
int Nhiphan(int n){
	int temp=0,p=0;
	while(n>0){
		temp+=n%2*pow(10,p);
		p++;
		n/=2;
	}
	return temp;
}
int main(){
	int n,h;
	cout<<"n=";cin>>n;
	do{
		cout<<"Nhap vao he so h: ";
		cin>>h;
		if(h<2 || h>2 && h<8 || h>8 && h<16 || h>16){
			cout<<"Gia tri h nhap vao khong hop le.\n";
			cout<<"Nhap lai h co gia tri (2,8,16).\n";
			
			cout<<"Nhap vao he so h: ";
			cin>>h;
		}
	}while(h<2 || h>2 && h<8 || h>8 && h<16 || h>16);
	if(h==2){
		cout<<"Ma nhi phan tuong ung: "<<" "<<Nhiphan(n);
	}
	if(h==8){
		cout<<"Ma bat phan tuong ung: "<<" "<<Batphan(n);
	}
	if(h==16){
		Thaplucphan(n);
	}
}
