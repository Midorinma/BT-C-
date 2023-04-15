#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Nhap n: ";cin>>n;
	--n;
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n+1; j++){
			if(j==n-i || j==n+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int j=0; j<2*n+1; j++){
		cout<<"*";
	}
	return 0;
}
