#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
//----------NHAPMANG------------
void NhapMang(int a[], int  &n){
	do{
		cout<<"n= ";cin>>n;
		if(n<=0 || n>MAX){
			cout<<"Nhap sai!. Xin kiem tra lai."<<endl;
		}
	}while(n<=0 || n>MAX);
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
//----------SAPXEP-------------
int Hoandoi(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Sapxep(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				Hoandoi(a[i],a[j]);
			}
		}
	}
}
//-----------TronMang-----------
void Tron2mangthanh1mang(int a[], int b[], int c[], int na, int nb, int &nc){
	nc=na+nb;	//phan tu tron chua hai phan tu a va b
	Sapxep(a,na);	//Sap xep 2 mang truoc khi tron
	Sapxep(b,nb);
	int VitriA=0,VitriB=0; 	//khoi tao  bien gia tri ben trong mang a va b
	for(int i=0; i<nc; i++){  	//Duyet vong lap mang c[] chua hai mang tron
		if(VitriA<na && VitriB<nb){ 	//phan tu mang a[0-na] && b[0-nb]
			if(a[VitriA]>b[VitriB]){
				c[i]=a[VitriA];
				VitriA++;
			}
			else{
				c[i]=b[VitriB];
				VitriB++;
			}
		}
		else if(VitriB==nb){
			c[i]=a[VitriA];
				VitriA++;
		}
		else{
			c[i]=b[VitriB];
				VitriB++;
		}
	}
}
int main(){
	int a[MAX],b[MAX],c[MAX];
	int na,nb,nc;
	
	NhapMang(a,na);
	XuatMang(a,na);
	
	NhapMang(b,nb);
	XuatMang(b,nb);
	Tron2mangthanh1mang(a,b,c,na,nb,nc);
	cout<<"Tron hai mang theo gia tri giam dan: "<<endl;
	XuatMang(c,nc);
}
