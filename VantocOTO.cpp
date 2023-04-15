#include<iostream>
using namespace std;
int main(){
	int v,v0,a,t;
	
	cout<<"Van toc ban dau cua oto la :"; cin>>v0;
	cout<<"gia toc cua oto la :";cin>>a;
	cout<<"thoi gian cua oto la :";cin>>t;
	cout<<"\tVan toc ban dau :"<<" "<<v0<<"(m/s)"<<endl;
	cout<<"\tGia toc"<<" "<<a<<"(m/s2)"<<endl;
	cout<<"\tThoi gian"<<" "<<t<<"(s)"<<endl;
	v=v0+a*t;
	cout<<" Van toc cuoi cung cua oto la :"<<v<<" "<<"(m/s)"<<endl;
}
