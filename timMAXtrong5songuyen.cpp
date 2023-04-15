#include<iostream>
using namespace std;
int Max(int a, int b){
	int x;
	x=(a>b?a:b);
	return x;
}
int main(){
	int x,y,z,h,t;
	cout<<"x=";cin>>x;
	cout<<"y=";cin>>y;
	cout<<"z=";cin>>z;
	cout<<"h=";cin>>h;
	cout<<"t=";cin>>t;
	int v=Max(x,y);
	int b=Max(x,z);
	int na=Max(x,h);
	int vi=Max(x,t);
	
	int m=Max(v,b);
	int n=Max(na,vi);
	
	int q=Max(n,m);
	
	cout<<"So MAX trong 5 so nguyen la: "<<q;
}
