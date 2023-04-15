#include<iostream>
#define MAX 100
using namespace std;
int main(){
	int a[MAX];
	int n,stt=0;
	int *c[MAX],temp;
	cout<<"Nhap gia tri nguoi dung: ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nhap gia tri thu "<<stt++<<" : ";
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		c[i]=&a[i];
	}
	for(int i=0; i<n; i++){
		if(*c[i]<*c[i+1]){
			temp=*c[i+1];
		}
	}
	cout<<"Gia tri lon nhat la: "<<temp;
}

