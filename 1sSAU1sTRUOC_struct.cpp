#include<iostream>
using namespace std;
struct Thoigian{
	int gio;
	int phut;
	int giay;
};
int main(){
	Thoigian tg;
	do{
		cout<<"h: ";cin>>tg.gio;
		cout<<"p: ";cin>>tg.phut;
		cout<<"s: ";cin>>tg.giay;
		if(tg.gio>24 ||tg.gio<0 || tg.phut>60 ||tg.phut<0 || tg.giay>60 || tg.giay<0){
			cout<<"Nhap sai! moi nhap lai.\n";
		}
	}while(tg.gio>24 ||tg.gio<0 || tg.phut>60 ||tg.phut<0 || tg.giay>60 || tg.giay<0);
	if( tg.giay==60){
		if(tg.phut==60){
			cout<<"1s sau: \n";
			cout<<tg.gio+1<<" : "<<0<<" : "<<0<<endl;
			cout<<"1s truoc: \n";
			cout<<tg.gio<<" : "<<60<<" : "<<59;
			return 0;
		}
		if(tg.phut<60 || tg.phut>=0){
			cout<<"1s sau: \n";
			cout<<tg.gio<<" : "<<tg.phut+1<<" : "<<0<<endl;
			cout<<"1s truoc: \n";
			cout<<tg.gio<<" : "<<tg.phut<<" : "<<59<<endl;
			return 0;
		}
	}
	if(tg.giay<60 && tg.giay>0){
		cout<<"1s sau: \n";
		cout<<tg.gio<<" : "<<tg.phut<<" : "<<tg.giay+1<<endl;
		cout<<"1s truoc: \n";
		cout<<tg.gio<<" : "<<tg.phut<<" : "<<tg.giay-1;
		return 0;
	}
	if( tg.giay==0 ){
		cout<<"1s sau: \n";
		cout<<tg.gio<<" : "<<tg.phut<<" : "<<tg.giay+1<<endl;
		if(tg.phut==0){
		cout<<"1s truoc: \n";
		cout<<tg.gio<<" : "<<60<<" : "<<59;
		}else{
			cout<<"1s truoc: \n";
			cout<<tg.gio<<" : "<<tg.phut-1<<" : "<<59;
		}
		return 0;
	}
}
