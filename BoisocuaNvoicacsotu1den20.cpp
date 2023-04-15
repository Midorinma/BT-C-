#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int songuyen,X;
	cout<<"Nhap mot so nguyen: ";cin>>songuyen;
	for( int i=1; i<=20; i++)
	{
		X=songuyen*i;
		cout<<setw(2)<<songuyen<<" x "<<setw(2)<<i<<setw(2)<<"="<<setw(4)<<X<<endl;
	}
	return 0;
}
