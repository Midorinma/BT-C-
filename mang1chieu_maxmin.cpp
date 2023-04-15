#include<iostream>
#include<iomanip>
using namespace std;
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
void timMAX(int a[], int n){
	int max=a[0];
	for(int i=0; i<n; i++){
		max=a[i]>max? a[i]:max;
	}
	cout<<"So lon nhat trong mang la: "<<max<<endl;
}

int timMIN(int a[], int n){
	int min=a[0];
	int i;
	for( i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int timvitriMIN(int a[], int n){
	int i=0;
	for(i=0; i<n; i++){
		if(a[i]==timMIN(a, n)){
			return i+1;
		}
	}
}
int main(){
	int a[100];
	int n;
	cout<<"Nhap n: ";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	timMAX(a,n);
	cout<<"Gia tri nho nhat trong mang la: "<<timMIN(a,n)<<" vi tri: "<<timvitriMIN( a, n);
}
