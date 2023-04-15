#include<iostream>

using namespace std;
int main(){
	int g,ph,s,tong,sau,truoc;
	cout<<"Nhap vao gio :\t"; cin>>g;
	cout<<"Nhap vao phut :\t"; cin>>ph;
	cout<<"Nhap vao giay :\t"; cin>>s;
	while(g>=24 || ph>=60 || s>=60){
	cout<<"Nhap SAI, NHAP LAI.\n";
	cout<<"Nhap vao gio :\t"; cin>>g;
	cout<<"Nhap vao phut :\t"; cin>>ph;
	cout<<"Nhap vao giay :\t"; cin>>s;
	}
	tong=(g*60)+(ph*60)+s;
	sau=tong-1;
	truoc=tong+1;
	cout<<"1 giay sau="<<" "<<sau<<endl;
	cout<<"1 giay truoc"<<" "<<truoc<<endl;
	
}
