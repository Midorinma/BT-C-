#include<iostream>
using namespace std;
int main(){
	int Diem;
	cout<<"Diem: ";
	cin>>Diem;
	cout<<"--------------------------------\n";
	while(Diem<0 || Diem>10){
		cout<<"NHAPSAI,Thang diem tu 0-10,NHAPLAI.\	n";
	cout<<"Diem: ";
	cin>>Diem;
	}
	switch(Diem){
		case 10:cout<<"xep loai xuat sac.";
		break;
		case 8:case 9:
			cout<<"xep loai gioi.";
			break;
		case 7:cout<<"Xep loai kha.";
		break;
		case 6:cout<<"Xep loai trung binh kha.";
		break;
		case 5:cout<<"Xep loai trung binh.";
		break;
		default:
			cout<<"Xep loai kem.";
	}
}
