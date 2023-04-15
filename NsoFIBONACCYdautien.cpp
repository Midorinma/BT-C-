#include<iostream>
using namespace std;
int main(){
	int n;
	int a=0,b=1,i,x;
	top:cout<<"Nhap vao n.";cin>>n;
	if(n<=0) goto top;
		for(i=0; i<n; i++){
			if(i==0){
				x=1;
				cout<<x<<" ,";
			}
			else{
				x=a+b;
				a=b;
				b=x;
				cout<<x<<" ,";
			}
	
			}
}
