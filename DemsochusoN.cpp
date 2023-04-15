#include<iostream>
using namespace std;
int count(int n){
	int Dem=0;
	while(n>0){
		n=n/10;
		Dem++;
	}
	return Dem;
}
int main(){
	int n;
	cout<<"Nhap vao so tu nhien N: ";
	cin>>n;
	cout<<"------------------------\n";
	cout<<"so tu nhien N co : "<<count(n)<<" chu so.";
}
