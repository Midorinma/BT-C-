#include<iostream>
#include<iomanip>
using namespace std;
//-----------NHAPMANG_A------------------
void NhapMang(int a[][100], int m, int n){
	int i,j;
	for(i=0; i<m; i++){
		for( j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
int XuatMang(int a[][100], int m, int n){
	int i,j;
	for( i=0; i<m; i++){
		for( j=0; j<n; j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
//-------------	NHAPMANG_B---------------
void NhapMaTran(int b[][100], int x, int y){
	int i,j;
	for(i=0; i<x; i++){
		for( j=0; j<y; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>b[i][j];
		}
	}
}
int XuatMaTran(int b[][100], int x, int y){
	int i,j;
	for( i=0; i<x; i++){
		for( j=0; j<y; j++){
			cout<<setw(3)<<b[i][j];
		}
		cout<<endl;
	}
}
//---------------TONGHAIMATRAN------------
void TongMATRAN(int c[][100], int a[][100], int b[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<setw(3)<<c[i][j];
		}
		cout<<endl;
	}
}

int main(){
int a[100][100];
int b[100][100];
int c[100][100];
int m,n;
int x,y;
do{
	cout<<"Nhap  gia tri hang cua MT1: ";cin>>m;
	cout<<"Nhap  gia tri cot cua MT1: ";cin>>n;
	cout<<"Nhap  gia tri hang cua MT2: ";cin>>x;
	cout<<"Nhap  gia tri cot cua MT2: ";cin>>y;
	if(m!=x || n!=y){
		cout<<"Hai ma tran khong cung kich co!"<<endl;
	cout<<"Nhap  gia tri hang cua MT1: ";cin>>m;
	cout<<"Nhap  gia tri cot cua MT1: ";cin>>n;
	cout<<"Nhap  gia tri hang cua MT2: ";cin>>x;
	cout<<"Nhap  gia tri cot cua MT2: ";cin>>y;
	}
}while(m!=x || n!=y);
	cout<<"Nhap MT1: "<<endl;
	NhapMang(a,m,n);
	cout<<"Xuat MT1: "<<endl;
	XuatMang(a,m,n);
	cout<<"Nhap MT2: "<<endl;
	NhapMaTran(b,x,y);
	cout<<"Xuat MT2: "<<endl;
	XuatMaTran(b,x,y);
	cout<<endl;
	cout<<"Ket qua cua phep cong hai ma tran la: "<<endl;
	TongMATRAN(c,a,b,m,n);

	
}
