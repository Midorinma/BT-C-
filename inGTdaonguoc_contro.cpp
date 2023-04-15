#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;
int main(){
	int a[MAX];
	int n;
	int *c;
	cout<<"n= ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Xuat mang: "<<endl;
	for(int i=0; i<n; i++){
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
	c=&a[n-1];
	cout<<"Gia tri dao nguoc boi *c: "<<endl;
	for(int i=n-1; i>=0; i--){
		cout<<setw(3)<<*c;
		c--;
	}
	return 0;
}
