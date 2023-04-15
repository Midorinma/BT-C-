#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int A,x,y;
	cout<<"Nhap so nguyen x:\n"; cin>>x;
	cout<<"Nhap so nguyen y:\n"; cin>>y;
	if(x>y){
		return 0;
	}
	A=0;
	for( int i=x; i<=y; i++ ){
		A+=pow(i,2);	
	}
	cout<<"-------OUTPUT------";
	cout<<"\n";
	cout<<"S="<<" "<<A;
	return 0;
}
