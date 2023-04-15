#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	char n;
	cout<<"Nhap vao mot ki tu :"<<setw(3);
	cin>>n;
	if(65<=int(n) && int(n)<=90){
		n=int(n)+32;
		cout<<"Chu thuong tuong ung la :"<<n;
	}
	else if(97<=int(n) && int(n)>=110){
		n=int(n)-32;
		cout<<"Chu hoa tuong ung la :"<<n;
	}
	return 0;
}
