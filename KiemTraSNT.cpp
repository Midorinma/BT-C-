#include<iostream>
#include<math.h>
using namespace std;
int KTSNT(int n){
	if(n<2){
		return 0;
	}
	if(n>2){
		if(n%2==0){
			return 0;
		}
		for(int i=3; i<=sqrt(float(n)); i+=2){
			if(n%i==0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
int main(){
	int a;
	cout<<"Nhap vao a: ";cin>>a;
	if(KTSNT(a)==1){
		cout<<a<<" La so nguyen to.";
	}
	else{
		cout<<a<<" Khong phai la so nguyen to.";
	}
}
