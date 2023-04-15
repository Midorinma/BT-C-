#include<iostream>
using namespace std;
int main(){
	int a,b;
	int sum;
	int *c,*d;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	c=&a;
	d=&b;
	sum= *c + *d ;
	cout<<"Tong hai so a&b: "<<sum;
	
}
