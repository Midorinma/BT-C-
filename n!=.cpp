#include<iostream>
using namespace std;
int main(){
	int n;
	int y=1;
	cout<<"Nhap n= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		y*=i;
	}
	cout<<"n! = "<<y;
	
}
