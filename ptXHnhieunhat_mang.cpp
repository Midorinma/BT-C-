#include<iostream>
#define MAX 100
using namespace std;
void NhapMang(int a[], int &n){
	do{
		cout<<"n= ";
		cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai! yeu cau nhap lai."<<endl;
		}
	}while( n<0 || n>MAX );
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void Xuli(int a[], int b[], int n){
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(a[i]==a[j]){
				b[i]++;
			}
		}
	}
}
void XuatMang(int a[], int b[], int n){
	int max=1;
	for(int i=0; i<n; i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	for(int i=0; i<n; i++){
		if(b[i]==max){
			cout<<"Phan tu co gia tri "<<a[i]<<" Xuat hien "<<b[i]<<" lan."<<endl;
		}
	}
}
int main(){
	int a[MAX],b[MAX]={0};
	int n;
	NhapMang(a,n);
	Xuli( a, b, n);
	XuatMang(a, b,n);
	return 0;
}
