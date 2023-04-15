#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
void Bieudongang(int a[], int n){
	int temp;
	for(int i=0; i<n; i++){
		temp=a[i];
		for(int j=0; j<temp; j++){
			cout<<setw(2)<<"*";
		}
		cout<<endl;
	}
}
void Hoandoi(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Sapxep(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				Hoandoi(a[i],a[j]);
			}
		}
	}
}
void Bieudodung(int a[], int n){
	Sapxep(a,n);
	int temp=0;
	for(int i=0; i<n;  i++){
		while(a[i]>a[i+1]){
			for(int j=0; j<=temp; j++){
				cout<<setw(3)<<"*";
			}
			cout<<endl;
			a[i]=a[i]-1;
		}
		temp++;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
				cout<<setw(3)<<"*";
			}
			cout<<endl;
	}
	
}
int main(){
	int a[5]={4,7,10,6,3};
	int n=5;
	int chon;
	cout<<"-------------------MENU----------------------\n";
	cout<<"1. Bieu do ngang."<<endl;
	cout<<"2. Bieu do dung."<<endl;
	cout<<"Ban chon? "<<endl;
	cin>>chon;
	switch(chon){
		case 1: Bieudongang(a,n);
		break;
		case 2: Bieudodung(a,n);
		break;
	}
	
}
