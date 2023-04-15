#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap mot so bat ki tu ban phim:";cin>>n;
	if(n>100){
		cout<<"So nguyen"<<" "<<'>'<<100;
	}else{
		cout<<"So nguyen"<<" "<<'<'<<100;
	}
}
