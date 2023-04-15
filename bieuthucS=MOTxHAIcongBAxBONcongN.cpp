#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,S;
	cout<<"Nhap so nguyen n:\n";
	cin>>n;
	S=0;
	for( int i=1; i<=n; i=i+1 ){
		for( int j=2; j<=n+1; j=j+1 ){
			S+=(i*j);
			i++;
		}
	}
	cout<<"N ="<<setw(2)<<S;
	return 0;
}
