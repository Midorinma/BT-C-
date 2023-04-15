#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
//-----------NhapXuat-------------
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
//----------TBCsole---------------
int KTsole(int n){
	for(int i=0; i<n; i++){
		if(n%2!=0){
			return 1;
		}
	}
	return 0;
}

float TBCsole(int a[], int n){
	float TBC=0;
	int Dem=0;
	for(int i=0; i<n; i+=2){
		if(KTsole(a[i])==1){
			TBC+=a[i];
			Dem++;
		}
	}
	return TBC/Dem;
}
int main(){
	int a[MAX];
	int n;
	do{
		cout<<"Nhap vao phan tu n: ";
		cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai! moi ban nhap lai.\n";
		}
	}while(n<0 || n>MAX);
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"TBC so le o vi tri chan: "<<TBCsole(a, n);
}
