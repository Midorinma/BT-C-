#include<iostream>
using namespace std;
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void Sapxepchen(int a[], int n){
	int i,j,termp;
	for(int i=1; i<n; i++){
		termp=a[i];
		j=i-1;
		while(j>=0 && a[j]>termp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=termp;
	}
}
int main(){
int a[20];
int n;
cout<<"Nhap n= ";cin>>n;
NhapMang(a,n);
Sapxepchen(a,n);
cout<<endl;
cout<<"Mang sau khi sap xep la: "<<endl;
XuatMang(a,n);	
}
