#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
	int a[100];
	int n;
	cout<<"Nhap vao so luong phan tu :\n";
	do{
		cin>>n;
		if(n<=0){
			cout<<"N phai lon hon 0. NHAP LAI.";
		}
	}while(n<=0);
	for(int i=0; i<n;i++){
		cout<<"Nhap tung phan tu :"<<"a["<<i<<"]"<<" ";
		cin>>a[i];
	}
	int tg;
	for(int i=0; i<n-1;i++){
		for(int j=i+1; j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout<<endl;
	cout<<"Sap xep tang dan :"<<endl;
	for(int i=0; i<n;i++){
		cout<<setw(5)<<a[i]<<setw(5);
	}
}
