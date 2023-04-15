#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Nhap n: ";cin>>n;
	for(int j=0; j<2*n-1; j++){
		cout<<"*";
	}
	cout<<endl;
	n--;
	for( int i=n-1; i>=0; i-- ){
		for(int j=0; j<2*n+1;j++){
			if(j==n-i || j==n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
