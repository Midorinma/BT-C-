#include<iostream>
using namespace std;
int main(){
	int n,tram,chuc,dv;
	cout<<"Nhap mot so nguyen gom 3 chu so :\n";
	cin>>n;
	tram=n/100;
	n-=(tram*100);
	chuc=n/10;
	dv=n-(chuc*10);
	cout<<"Vay tri dao nguoc cua mot so nguyen la :\n";
	cout<<endl;
	cout<<dv<<" "<<chuc<<" "<<tram<<endl;
}
