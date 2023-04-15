#include<iostream>
using namespace std;
bool KiemtraA(int a){
	int Dem=0;
	for(int i=1;i<a;i++){
		if(a%i==0){
			Dem+=1;
			}
	}
	if(Dem==1){
		return true;
	}
	else{
		return false;
	}
	
}
bool KiemtraB(int b){
	int Dem=0;
	for(int j=1;j<b;j++){
		if(b%j==0){
			Dem+=1;
			}
	}
	if(Dem==1){
		return true;
	}
	else{
		return false;
	}
	
}
int main(){
	int a,b;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	if((KiemtraA(a)&&KiemtraB(b))==true){
		cout<<"La so nguyen to cung nhau.";
	}
	else{
		cout<<"Khong la so nguyen to cung nhau.";
	}
}
