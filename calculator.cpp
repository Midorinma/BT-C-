#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int A,B;
	cout<<"Nhap vao gia tri cua A :"<<endl;
	cin>>A;
	cout<<"Nhap vao gia tri cua B :"<<endl;
	cin>>B;	
	cout<<"---------KetQua------------------\n";
	cout<<A<<setw(2)<<'+'<<setw(2)<<B<<setw(2)<<"="<<setw(2)<<(float)A+B<<endl;
	cout<<A<<setw(2)<<'-'<<setw(2)<<B<<setw(2)<<"="<<setw(2)<<(float)A-B<<endl;
	cout<<A<<setw(2)<<'*'<<setw(2)<<B<<setw(2)<<"="<<setw(2)<<(float)A*B<<endl;
	cout<<A<<setw(2)<<'/'<<setw(2)<<B<<setw(2)<<"="<<setw(2)<<(float)A/B<<endl;
	cout<<A<<setw(2)<<'%'<<setw(2)<<B<<setw(2)<<"="<<setw(2)<<A%B<<endl;
}
