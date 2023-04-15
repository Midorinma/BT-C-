#include<iostream>
using namespace std;
int main(){
	int Doanhso;
	float Hoahong;
	cout<<"Nhap vao tong doanh so ban hang :";cin>>Doanhso;
	if(Doanhso<=100){
		Hoahong=Doanhso*5/100;
		cout<<"nhan duoc 5% theo doanh so ban hang."<<endl;
		cout<<"Muc hoa hong :"<<Hoahong<<" "<<"Trieu";
	}
	else if(100<Doanhso && Doanhso<=300){
		Hoahong=Doanhso*0.1;
		cout<<"nhan duoc 10% theo doanh so ban hang."<<endl;
		cout<<"Muc hoa hong :"<<Hoahong<<" "<<"Trieu";
	}
	else if(300<Doanhso){
		Hoahong=Doanhso*0.2;
		cout<<"nhan duoc 20% theo doanh so ban hang."<<endl;
		cout<<"Muc hoa hong :"<<Hoahong<<" "<<"Trieu";
	}
	return 0;
}
