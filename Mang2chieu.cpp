#include<iostream>
#include<iomanip>
#include<utility>
#define MAX 100
using namespace std;
void NhapMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			do{
				cout<<"a["<<i<<"]["<<j<<"]= ";
				cin>>a[i][j];
				if(a[i][j]<0 || a[i][j]>100){
					cout<<"can nhap gia tri >0 && <100: ";
					cout<<endl;
				}
			}while(a[i][j]<0 || a[i][j]>100);
		}
	}
}
void XuatMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			cout<<setw(3)<<a[i][j];
		
	cout<<endl;
	}
}
std::pair<int,int> Timkiem( int a[][100], int m, int n, int v ){
	for(int  i=0; i<m; i++){
		for(int j=0; j<n; j++)
			if(a[i][j]==v)
				return {i,j};
	}
	return {-1,-1};
}
void Chuyenvi(int a[][100], int &n, int &m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cout<<setw(3)<<a[i][j];
		
	cout<<endl;
	}
}
/*void Hoandoi(int &x, int &y){
	int temp=x; 
	x=y;
	y=temp;
}*/
int main(){
	int a[100][100];
	int m,n;
	do{
		cout<<"Nhap vao so hang: ";cin>>m;
		cout<<"Nhap vao so cot: ";cin>>n;
		if(n<1 || n>100 && m>10 || m>100 || m<0){
			cout<<"Nhap sai! xin vui long nhap lai."<<endl;
		}
	}while(n<1 || n>100 && m>10 || m>100 || m<0 );	
	/*NhapMang(a,m,n);
	cout<<"Xuat Mang: "<<endl;
	XuatMang(a,m,n);
	Hoandoi(m,n);
	XuatMang(a,n,m);*/
	NhapMang(a,m,n);
	cout<<"Xuat Mang: "<<endl;
	XuatMang(a,m,n);
	cout<<endl;
	cout<<"Mang sau khi chuyen doi: "<<endl;
	Chuyenvi(a,m,n);
	int v;
	cout<<"Nhap vao gia tri can tim: ";cin>>v;
	std::pair<int,int> search=Timkiem(a,m,n,v);
	
	cout<<"Tim thay "<<v<<" tai vi tri hang: "<<search.first<<" va cot: "<<search.second;
}
