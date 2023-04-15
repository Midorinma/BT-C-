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
	int x,y;
	cout<<"Nhap vao gia tri cua x: ";cin>>x;
	cout<<"Nhap vao gia tri cua y: ";cin>>y;
	if(KTSNT(x)&&KTSNT(y)==1){
		cout<<x<<" : "<<y<<" La hai so nguyen to.";
	}
	else{
		cout<<x<<" : "<<y<<" Khong la hai so nguyen to.";
	}
}
