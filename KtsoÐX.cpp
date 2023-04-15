#include<iostream>
using namespace std;
int KTDX(int n){
		int temp,sum=0,r;
	for(temp=n; n!=0; n/=10){
		r=n%10;
		sum=sum*10+r;
		}
	if(temp==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	cout<<"Nhap so : ";cin>>n;
	if(KTDX(n)==1){
		cout<<n<<" La so doi xung.";
	}
	else{
		cout<<n<<" Khong la so doi xung.";
	}
}
