#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
void NhapMang(char a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void XuatMang(char a[], int n){
	for( int i=0; i<n; i++ ){
			cout<<a[i]<<" ";
	}
}
bool Kiemtra(char a[], int n){
	for(int i=0 ; i<n; i++){
		if(a[i]<'1' || a[i]>'5')return false;
	}
	return true;
}
void Kitu(char a[], int n){
	for(int i=0 ; i<n; i++){
		if(a[i]=='1'){
			cout<<setw(3)<<"A";
		}
		if(a[i]=='2'){
			cout<<setw(3)<<"B";
		}
		if(a[i]=='3'){
			cout<<setw(3)<<"C";
		}
		if(a[i]=='4'){
			cout<<setw(3)<<"D";
		}
		if(a[i]=='5'){
			cout<<setw(3)<<"E";
		}
	}
}
int main(){
	char a[100];
	int n=strlen(a);
	do{
		cout<<"Nhap so luong phan tu n: ";cin>>n;
		if(n<=0){
			cout<<"Nhap lai n>0 :"<<endl;
		}
	}while(n<=0 || n>5);
	NhapMang(a,n);
	if(Kiemtra(a,n)==false){
		cout<<"Mang nhap khong hop le.";
		return 0;
	}
	if(Kiemtra(a,n)==true){
		XuatMang(a,n);
		Kitu(a,n);
	}
	
}
