#include<iostream>

using namespace std;
int main(){
	int n,i,j,Dem=0;
	cout<<"Nhap n: "; cin>>n;
	if(n%2==0){
		n++;
	}
	cout<<endl;
	while(n>0){
		for(int i=0; i<=Dem; i++)
			cout<<" ";
		for(int j=n; j>0; j--)
			cout<<"*";
		cout<<endl;
		cout<<endl;
		Dem++;
		n-=2;
		
	}
}
