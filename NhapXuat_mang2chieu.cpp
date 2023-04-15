#include<iostream>
#include<iomanip>
using namespace std;
void NhapMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void XuatMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int a[100][100];
	int m,n;
	cout<<"Nhap vao so hang: ";cin>>m;
	cout<<"Nhap vao so cot: "; cin>>n;
	NhapMang(a,m,n);
	cout<<"Xuat mang: "<<endl;
	XuatMang(a,m,n);
}
