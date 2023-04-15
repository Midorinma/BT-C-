#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<"*a["<<i<<"]= ";
		cin>>*(a+i);
	}
}
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<*(a+i);
	}
}
//----------Cac thao tac-------------
int CongPT(int *a, int n){
	int *cong=NULL;
	cong=a;
	cong++;
	cong+=3;
	cout<<endl<<*cong;
}
int main(){
	int *a=NULL;
	int n;
	int chon;
	a=new int[n];
	do{
		cout<<"Nhap n: ";cin>>n;
		if(n<0 ||n>MAX){
			cout<<"Nhap sai! xin moi nhap lai.\n";
		}
	}while(n<0 || n>MAX);
	NhapMang(a,n);
	cout<<"Xuat Mang: ";
	XuatMang(a,n);
	//----------Them PT vao mang------------
				//cap phat bo nho
				int giatrichen,vitrichen;
				int *b;
				b=new int (n);//khoi tao mang dong chua vung nho new
				cout<<"\nNhap gia tri chen: ";cin>>giatrichen;
				cout<<"Nhap vi tri chen: ";cin>>vitrichen;
				vitrichen--;
				n++;
				for(int i=0; i<n-1; i++){//duyet vong lap de sao chep pt
					b[i]=a[i];//sao chep pt a cho b
				}
				for(int i=n-1; i>vitrichen; i--)//vong lap di tu ngoai vao trong va lon hon vi tri chen
					b[i]=b[i-1];//phan tu di chuyen tu trai sang phai
				b[vitrichen]=giatrichen;//gan dia chi vi tri chen bang gia tri chen
				/*tien hanh cap phat dong lai a*/
				delete []a;
				a=new int[n];
				for(int i=0; i<n; i++){//gan dia chi can chen cho mang moi
					a[i]=b[i];
				}
				cout<<endl;
				XuatMang(a,n);
				cout<<endl;
	//-------------Xoa PT  mang--------------
	int vitrixoa;
	cout<<"delete: ";cin>>vitrixoa;
	vitrixoa--;
	n--;
	int *ph=new int[n];
	for(int i=0; i<n+1; i++){
		ph[i]=a[i];
	}
	for(int i=vitrixoa; i<n+1; i++)
	ph[i]=ph[i+1];
	delete []a;
	a=new int [n];
	for(int i=0; i<n; i++){
		a[i]=ph[i];
	}
	XuatMang(a,n);
		if(a!=NULL){
		delete []a;
		}
	return 0;
	/*Ta c?ng có th? ép ki?u con tr? theo cú pháp:

(<Kieu ket qua>*)<Tên con tro>  Chang han, ví du trên ðý?c vi?t l?i:

int a, *p, *q ;

float *f;

a = 5 ; p = &a ; q = p ; /* ðúng 

f = (float*)p; Ðúng nho ép kieu */
}
