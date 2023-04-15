#include<iostream>
using namespace std;
int KTFIBONACCI(int n){
	int a=0,b=1,x;
	if(n==0 || n==1){
		return 1;
	}
	for(int i=1; i<=n; i++){
		x=a+b;
		a=b;
		b=x;
		if(x==n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	cout<<"Nhap n:";cin>>n;
	if(KTFIBONACCI(n)==1){
		cout<<n<<" La so FIBONACCI.";
	}
	else{
		cout<<n<<" Khong la so FIBONACCI.";
	}
}
