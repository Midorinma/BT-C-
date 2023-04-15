#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float n,S=1;
	cout<<"Nhap n: ";
	cin>>n;
	
	for( int i=1; i<=n ; i++ ){
		S*=(1+1/pow(i,2));
	}
	cout<<"----------------\n";
	cout<<"(1+1/n^2) = "<<S<<endl;
}
