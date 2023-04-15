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
int TongPT(int a[][100], int m, int n){
	int i=0;
	int temp=0;
	for(int i=0; i<m; i++){
		if(i%2==0){
			for(int j=0; j<n; j++){
				temp+=a[i][j];
			}
		}
		else{
			continue;
		}	
	}
	return temp;
}
int TimMAXcot1(int a[][100], int m, int n){
	int Sum=1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			Sum=a[i][0]>Sum? a[i][0]:Sum; 
		}
	}
	return Sum;
}
int main(){
	int a[100][100];
	int m,n;
	cout<<"Nhap vao so hang: ";cin>>m;
	cout<<"Nhap vao so cot: ";cin>>n;
	NhapMang(a,m,n);
	cout<<"Xuat mang: "<<endl;
	XuatMang(a,m,n);
	int tong=TongPT(a,m,n);
	cout<<"Tong cac PT tren hang chan cua ma tran la: "<<tong<<endl;
	cout<<"Gia tri lon nhat tren cot 1 cua ma tran: "<<TimMAXcot1(a,m,n);	
}
