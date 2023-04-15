#include<iostream>
using namespace std;
int MAX(int a,int b){
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	return a;
}
int MIN(int a,int b){
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	return b;
}
int UCLN(int a, int b){
	int box;
	for(int i=1; i<=MAX(a,b); i++){
		if(MAX(a,b)%i==0){
			while(MIN(a,b)%i==0){
				box=i;
				i++;
				if(i==MIN(a,b))break;
				if(box>1){
					break;
				}
			}
		}
	}
	return box;
}
int BCNN(int a,int b){
	int i,x,y,z;
	for(i=1;i<=MAX(a,b);i++){
		x=MAX(a,b)*i;
		if(x%MIN(a,b)==0){
			z=x/MIN(a,b);
			y=MIN(a,b)*z;
			break;
		}
		if(MAX(a,b)%MAX(a,b)==0){
			y=MAX(a,b);
		}
	}
return y;
}
int main(){
	int a,b;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la: "<<UCLN(a,b)<<endl;
	cout<<"Boi chung nho nhat cua "<<a<<" va "<<b<<" la: "<<BCNN(a,b)<<endl;
	if(UCLN(a,b)==1){
		cout<<a<<" va "<<b<<" La hai so nguyen to.";
	}
	else{
		cout<<a<<" va "<<b<<" Khong la hai so nguyen to.";
	}
	
}
