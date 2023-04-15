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
void Hoandoi(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Sapxep(int a[][100],int m, int n){
	int i,j;
	for( i=0; i<m; i++ ){
		for( j=0; j<n; j++ ){
			if(a[1][j]<a[1][j+1]){
				Hoandoi(a[1][j],a[1][j+1]);
			}
		}
	}
}
int TongPT(int a[][100], int m, int n){
	int Sum=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			Sum+=a[i][j];
		}
	}
	return Sum;
}
int TimMAX(int a[][100], int m, int n){
	int MAX=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			MAX=a[i][j]>MAX? a[i][j] : MAX;
		}
	}
	return MAX;
}

int TimMIN(int a[][100], int &m, int &n){
	int MIN,kt=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]%3==0){
				MIN=a[i][j];
				kt=1;
				break;
			}
		}
	}
	if(kt==1){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if((a[i][j]<MIN)&&(a[i][j]%3==0)){
					MIN=a[i][j];
				}
			}
		}
		cout<<"So nho nhat chia het cho 3 la: "<<MIN;
	}
	else{
		cout<<"Khong tim thay so min chia het cho 3.";
	}
}
int main(){
	int a[100][100];
	int m,n;
	cout<<"Nhap vao gia tri hang: ";cin>>m;
	cout<<"Nhap vao gia tri cot: ";cin>>n;
	NhapMang(a,m,n);
	cout<<"Xuat Mang: "<<endl;
	XuatMang(a,m,n);
	
	Sapxep(a,m,n);
	cout<<"Sap xep dong 2 theo chieu giam dan: "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(3)<<a[1][j];
		}
		break;
	}

	cout<<endl;
	int Tong=TongPT(a,m,n);
	cout<<"Tong cac phan tu trong ma tran: "<<Tong<<endl;
	
	int max=TimMAX(a,m,n);
	cout<<"Gia tri lon nhat trong ma tran: "<<max<<endl;
	
	TimMIN(a,m,n);
}
