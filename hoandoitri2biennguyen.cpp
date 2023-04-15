#include<iostream>
using namespace std;
void HoanDoi(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
cout<<a<<" "<<b;
}
int main(){
	int x,y;
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap y: ";cin>>y;
	HoanDoi(x,y);
}
