#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao mot so nguyen :"; 
	cin>>n;
	while(n==-1){
	cout<<"So nguyen khong duoc bang -1.NHAP LAI";
	cout<<endl;
	cout<<"Nhap vao mot so nguyen :"; 
	cin>>n;
	}
	for( int i=n; i>=-100; i-- ){
		cout<<i<<endl;
	}
	return 0;
}
