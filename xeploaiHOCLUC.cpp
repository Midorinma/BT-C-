#include<iostream>
using namespace std;
int main(){
	float KT,GK,CK,DTB;
	cout<<"Nhap vao diem Kiem tra :";cin>>KT;
	cout<<"Nhap vao diem Giua ki :";cin>>GK;
	cout<<"Nhap vao diem Cuoi ki :";cin>>CK;
	DTB=(KT+GK+CK)/3;

	if(DTB>=9.0 && DTB<10){
		cout<<"Diem trung Binh :"<<" "<<DTB<<" "<<"Hang A"<<endl;
	}
	else if( 7.0<=DTB && DTB<9.0 ){
		cout<<"Diem trung Binh :"<<" "<<DTB<<" "<<"Hang B"<<endl;
	}
	else if( 5.0<=DTB && DTB<7.0 ){
		cout<<"Diem trung Binh :"<<" "<<DTB<<" "<<"Hang C"<<endl;
	}
	else if( DTB<5.0 && DTB>=0){
		cout<<"Diem trung Binh :"<<" "<<DTB<<" "<<"Hang F"<<endl;
	}
	else{
		cout<<"Diem khong hop le";
	}
	return 0;
}

