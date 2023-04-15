#include<iostream>
using namespace std;
int main(){
	int a,b,x;
	int *c;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	x=a+b;
	c=&x;
	cout<<"Gia tri cua *c="<<*c<<endl;
	return 0;
}
