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
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
int TimMAX(int a[][100], int m, int n){
	int temp=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			temp=a[i][j]>temp ? a[i][j] : temp; 
		}
	}
	return temp;
}
int TimMIN(int a[][100], int m, int n){
	int min=a[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			min=min<a[i][j] ? min : a[i][j]; 
		}
	}
	return min;
}
int main(){
	int a[100][100];
	int m,n;
	cout<<"Nhap gia tri cua hang: ";cin>>m;
	cout<<"Nhap gia tri cua cot: ";cin>>n;
	NhapMang(a,m,n);
	cout<<"Xuat mang: "<<endl;
	XuatMang(a,m,n);
	cout<<endl;
	int MAX=TimMAX(a,m,n);
	cout<<"Gia tri lon nhat trong ma tran la: "<<MAX<<endl;
	int MIN=TimMIN(a,m,n);
	cout<<"Gia tri nho nhat trong ma tran la: "<<MIN;
}
