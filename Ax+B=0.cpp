#include<iostream>
using namespace std;
int main(){
	float a,b,c,x,y;
	cout<<"nhap vao so a : ";cin>>a;
	cout<<"Nhap vao so b : ";cin>>b;
	cout<<"Nhap vao so c : ";cin>>c;
	cout<<"------------------------\n";
	if(a==0){
		cout<<a<<"x"<<" + "<<b<<" ="<<c<<endl;
		cout<<"Phuong trinh vo nghiem.";
	}
	if(a!=0){
		cout<<a<<"x"<<" + "<<b<<" ="<<c<<endl;
		cout<<"x = "<<(c-b)/a;
	}
		
	
}
