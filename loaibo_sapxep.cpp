#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
//-----------NHAPMANG-----------
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
}
//---------SAPXEP----------
void Swap(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void Sapxep(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				Swap(a[i],a[j]);
			}
		}
	}
}
//--------LOAIBO------------
int KT(int *b, int n, int x){
	for(int i=0; i<n; i++){
		if(b[i]==x){
			return i;
		}
	}
	return -1;
}
void Hienthi(int *b, int *Dem, int n){

	for(int i=0; i<n; i++){
		cout<<setw(3)<<b[i];
	}
}
void Loaibo(int a[], int n){
	int b[MAX],Size=0;
	int Dem[MAX];
	for(int i=0 ; i<n; i++){
		Dem[i]=0;
	}
	for(int i=0; i<n; i++){
		int index=KT(b,Size,a[i]);
		if(index==-1){
			b[Size]=a[i];
			Dem[Size]=1;
			Size++;
		}
		else{
			Dem[index]++;
			continue;
			n--;
		}
	}
	
	Hienthi(b,Dem,Size);
}
int main(){
	int a[MAX],n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai! xin nhap lai: "<<endl;
		}
	}while(n<0 || n>MAX);
	NhapMang(a,n);
	cout<<"Xuat mang: ";
	XuatMang(a,n);
	cout<<"Mang tang dan va loai bo phan tu trung nhau la: ";
	Sapxep(a,n);
	Loaibo(a,n);
	
}
