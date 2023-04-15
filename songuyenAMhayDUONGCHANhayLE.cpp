#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao mot so nguyen: ";
	cin>>n;
	if(n>0){
		cout<<"n la so nguyen duong."<<endl;
	}
	else{
		cout<<"n la so nguyen am."<<endl;
	}
	if(n%2==0){
		cout<<"n la so chan."<<endl;
	}
	else{
			cout<<"n la so le."<<endl;
		}
	return 0;
}
