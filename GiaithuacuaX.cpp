#include<iostream>
using namespace std;
int main(){
	int n,a,b,x,z;
	a=1;
	b=2;
	cout<<"Nhap mot so nguyen duong :";
	cin>>n;
	while(b<=n)
	{
		x=a*b;
		a=x;
		b+=1;
	
	}
	cout<<x<<endl;
	return 0;
}
