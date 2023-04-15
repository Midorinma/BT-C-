#include<iostream>
using namespace std;
int main(){
	int A,B,C,D,E;
	int y=2;
	int x=18;
	A=y+3;
	B=y-2;
	C=y*5;
	D=x/y;
	E=x%y;
	cout<<"Gtri x"<<" "<<"Gtri y"<<" "<<"Bieu Thuc"<<" "<<"Ket Qua\n";
	cout<<x<<" "<<"|"<<"\t"<<y<<" "<<"|"<<"\t"<<"A=y+3"<<"\t"<<"|"<<"A="<<A<<endl;
	cout<<x<<" "<<"|"<<"\t"<<y<<" "<<"|"<<"\t"<<"B=y-2"<<"\t"<<"|"<<"B="<<B<<endl;
	cout<<x<<" "<<"|"<<"\t"<<y<<" "<<"|"<<"\t"<<"C=y*5"<<"\t"<<"|"<<"C="<<C<<endl;
	cout<<x<<" "<<"|"<<"\t"<<y<<" "<<"|"<<"\t"<<"D=x/y"<<"\t"<<"|"<<"D="<<D<<endl;
	cout<<x<<" "<<"|"<<"\t"<<y<<" "<<"|"<<"\t"<<"E=x%y"<<"\t"<<"|"<<"E="<<E<<endl;
	return 0;
}
