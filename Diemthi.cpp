#include<iostream>
using namespace std;
int main(){
	float kt1,kt2,kt3,gk,ck,tkt,td;
	cout<<"\n===========Diem Kiem Tra==============\n";
	cout<<"Nhap diem kiem tra 1:";cin>>kt1;
	cout<<"Nhap diem kiem tra 2:";cin>>kt2;
	cout<<"Nhap diem kiem tra 3:";cin>>kt3;
	cout<<"\n==========Diem Thi Giua Ki============\n";
	cout<<"Nhap diem thi giua ki:";cin>>gk;
	cout<<"\n==========Diem Thi Cuoi Ki============\n";
	cout<<"Nhap diem thi cuoi ki:";cin>>ck;
	tkt=kt1+kt2+kt3;
	cout<<"Tong diem kiem tra:"<<tkt<<endl;
	cout<<"Diem thi giua ki:"<<gk<<endl;
	cout<<"Diem thi cuoi ki:"<<ck<<endl;
	cout<<"\n--------------------------------------\n";
	td=tkt+gk+ck;
	cout<<"Tong diem :"<<td<<endl;
	return 0;
	
}
