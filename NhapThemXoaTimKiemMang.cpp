#include<iostream>
#include<iomanip>
#define MAX 20
using namespace std;
int NhapMang(int s[], int n){
	for( int i=0; i<n; i++ ){
		cout<<"a["<<i<<"]=";
		cin>>s[i];
	}
}
int XuatMang(int s[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<s[i];
	}
}
void InsertLast(int s[], int &n, int x, int y){
	if(n>=MAX){
		return;
	}
	if(x<0){
		x=0;
	}
	if(x>=n){
		x=n;
	}
	for( int i=n; i>x; i-- ){
		s[i]=s[i-1];
	}
	s[x]=y;
	n++;
}
void Delete(int s[], int &n, int x){
	if(n<0){
		return;
	}
	if(x<0){
		x=0;
	}
	if(x>=n){
		x=n-1;
	}
	//Dich chuyen mang
	for(int i=x; i<n-1;i++){
		s[i]=s[i+1];
	}
	--n;
}
int timkiem(int s[],int &n, int a){
	for(int i=0; i<n; i++){
		if(s[i]==a){
			return i;
		}
	}
	return -1;
}
int timkiemnhiphan(int s[], int n, int x){
	int left=0,right=n-1;
	int mid;
	while(left<=right){
		mid=(left+right)/2;
		if(s[mid]==x)return mid;
		if(s[mid]<x){
			left=mid+1;
		}
		if(s[mid]>x){
			right=mid-1;
		}
	}
	return -1;
}
int main(){
	int s[20];
	int n;
	cout<<"Nhap n: ";cin>>n;
	NhapMang(s,n);
	XuatMang(s,n);
	int nhap;
	int x,y;
	int a;
	cout<<endl;
	do{
		cout<<"----------------------MENU--------------------------\n";
		cout<<"1.Them mot phan tu vao mang.\n";
		cout<<"2.Xoa mot phan tu.\n";
		cout<<"3.Tim kiem tuyen tinh.\n";
		cout<<"4.Tim kiem nhi phan.\n";
		cout<<"5.Exit\n";
		cout<<"Ban chon?\n";
		cin>>nhap;
		switch(nhap){
			case 1: 
			cout<<"Nhap so can them.\n";
			cin>>y;
			cout<<"Nhap vi tri muon chen.\n";
			cin>>x;
			InsertLast(s,n,x,y);
			cout<<"Mang sau khi them.\n";
			XuatMang(s,n);
			cout<<endl;
			break;
			case 2: 
			cout<<"Nhap vi tri muon xoa:\n";
			cin>>x;
			Delete(s,n,x);
			cout<<"Mang sau khi xoa:\n";
			XuatMang(s,n);
			cout<<endl;
			break;
			case 3:
			cout<<"Nhap vao gia tri can tim:"<<endl;
			cin>>a;
			cout<<"tim thay "<<a<<" tai vi tri "<<timkiem(s,n,a);
			cout<<endl;
			break;
			case 4:
			cout<<"Nhap vao gia tri can tim: ";
			cin>>x;
			cout<<"tim thay "<<x<<" tai vi tri "<<timkiemnhiphan(s,n,x);
			cout<<endl;
			break;
			case 5:return 0;
			break;
		}
	}while(nhap);

	
}
