#include<iostream>
using namespace std;
int main(){
	int n;
	int a=0,b=1,i,x;
	do{
		cout<<"Nhap vao n: "; cin>>n;
		if(n<0){
			cout<<"NHAP SAI! can nhap lai.";
		}
			
	}while(n<0);
	
	for(i=0; i<n; i++){
		x=a+b;
		a=b;
		b=x;
		if(x<n){
			cout<<x<<" ,";
		}
			}
	return 0;
}
