#include<iostream>
using namespace std;
void Sapxep( int a, int b, int c ){
	int temp;
	if(a<b ){
		temp=a;
		a=b;
		b=temp;
	}
		if(a<c){
			temp=a;
			a=c;
			c=temp;
		}
		if(b<c){
			temp=b;
			b=c;
			c=temp;
		}
cout<<"Sap xep nho dan la :"<<a<<" "<<b<<" "<<c;
}
int main(){
	int a,b,c;
	cout<<"nhap a=";cin>>a;
	cout<<"Nhap b=";cin>>b;
	cout<<"Nhap c=";cin>>c;
	Sapxep(a,b,c);
}
