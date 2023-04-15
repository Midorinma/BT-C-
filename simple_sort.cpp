#include<iostream>
using namespace std;
int Daochieu(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
	
}
/*void Sapxep(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i; j<n; j++){
			if(a[i]<a[j]){
				Daochieu(a[i],a[j]);
			}
		}
	}
}*/
/*void Luachon(int a[], int n){
	int i,j,min,tam;
	for(i=0; i<n-1; i++){
		tam=a[i];
		min=i;
		for(j=i; j<n; j++)
		if(a[min]>a[j])min=j;
		a[i]=a[min];
		a[min]=tam;
	}
}*/
void SapxepNoibot(int a[], int n){
	int i,j;
	for(i=0; i<n-1;i++)
		for(j=n-1; j>i; j--)
		if(a[j-1]>a[j])
		Daochieu(a[j-1],a[j]);
	
}
void NhapMang(int a[], int n){
	for(int j=0; j<n; j++){
		cout<<"a["<<j<<"]= ";
		cin>>a[j];
	}
}
void XuatMang(int a[], int n){
	for( int j=0; j<n; j++ ){
		cout<<a[j]<<" ";
	}
}
int main(){
	int a[20];
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<endl;
	cout<<"Mang sap xep Giam dan la: "<<endl;
	/*Sapxep(a,n);
	XuatMang(a,n);*/
	
	//Luachon(a,n);
	//XuatMang(a,n);
	SapxepNoibot(a,n);
	XuatMang(a,n);

}
