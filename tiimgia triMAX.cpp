#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap vao ba so nguyen:";cin>>a>>b>>c;
	if(a-b>0 && a-c>0){
		cout<<"Gia tri lon nhat la :"<<a;
	}
	else if(b-a>0 && b-c>0){
		cout<<"Gia tri lon nhat la :"<<b;
	}
	else if(c-a>0 &&c-b>0){
		cout<<"Gia tri lon nhat la :"<<c;
	}
	return 0;
}
