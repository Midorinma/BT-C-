#include<iostream>
using namespace std;
void Hoandoi(int *x, int*y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a,b;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	Hoandoi(&a,&b);
	cout<<"Hoan doi "<<a<<" "<<b;
}
