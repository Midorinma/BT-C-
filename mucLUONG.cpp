#include<iostream>
using namespace std;
int main(){
	float n,x,y,z,a;
	cout<<"Nhap so luong :";cin>>n;
		
	if( n<0 || n>50){
		cout<<"Luong khong hop he."<<endl;
	}
	else if( 0<n && n<7 ){
		x=n*10/100;
		n-=x;
		cout<<"-10% thue thu nhap"<<endl;
		cout<<"Muc luong hang thang la:"<<n<<endl;
	}
	else if( 7<=n&& n<15 ){
		y=n*20/100;
		n-=y;
		cout<<"-20% thue thu nhap"<<endl;
		cout<<"Muc luong hang thang la:"<<n<<endl;
	}
	else if( 15<=n && n<30 ){
		z=n*30/100;
		n-=z;
		cout<<"-30% thue thu nhap"<<endl;
		cout<<"Muc luong hang thang la:"<<n<<endl;
	}
	else if( 30<=n && n<50 ){
		a=n*35/100;
		n-=a;
		cout<<"-35% thue thu nhap"<<endl;
		cout<<"Muc luong hang thang la:"<<n<<endl;
	}
	return 0;
}
