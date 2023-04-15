#include<iostream>
using namespace std;
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<"*a["<<i<<"]= ";
		cin>>*(a+i);
	}
}
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}
int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"n= ";cin>>n;
		if(n<0){
			cout<<"Nhap sai! can nhap lai."<<endl;
		}
	}while(n<0);
	NhapMang(a,n);
	XuatMang(a,n);
	delete []a;
	return 0;
}
