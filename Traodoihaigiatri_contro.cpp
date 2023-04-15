#include<iostream>
using namespace std;
int main(){
	int a,b;
	int *c,*d;
	int temp;
	cout<<"Nhap a= ";cin>>a;
	cout<<"Nhap b= ";cin>>b;
	c=&a;
	d=&b;
	
		temp=*c;
		*c=*d;
		*d=temp;
	
	cout<<"Gia tri sau khi trao doi: "<<*c<<" "<<*d;
	return 0;
}
