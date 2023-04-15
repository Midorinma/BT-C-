#include<iostream>
using namespace std;
int main(){
	int n,nghin,tram,chuc,dv;
	cout<<"Nhap mot so N: ";
	cin>>n;
	nghin=n/1000;
	n%=1000;
	tram=n/100;
	n%=100;
	chuc=n/10;
	dv=n%10;
	cout<<"----------------------\n";
	cout<<"Tong cua cac chu so cua so n: ";
	cout<<nghin+tram+chuc+dv<<endl;
	
	
}
