#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,delta,x,y,z;
	cout<<"Nhap gia tri cua a:";cin>>a;
	cout<<"Nhap gia tri cua b:";cin>>b;
	if(a==0){
		cout<<"can nhap a>0";
		return 0;
	}
	cout<<"Nhap gia tri cua c:";cin>>c;
	if((a+b+c)==0){
		cout<<"phuong trinh co nghiem :"<<" "<<"x1= 1"<<" "<<"x2="<<c/a;
	}
	if((a-b+c)==0){
		cout<<"phuong trinh co nghiem :"<<" "<<"x1= 1"<<" "<<"x2="<<-c/a;
	}
	delta=pow(b,2)-4*a*c;
	x=-b/(2*a);
	y=(-b-sqrt(delta))/(2*a);
	z=(-b+sqrt(delta))/(2*a);
	
	if(delta<0){
		cout<<"Phuong trinh vo nghiem.";
	}
	else if(delta==0){
		cout<<"Phuong trinh co nghiem kep."<<"x1=x2="<<x;
	}
	else if(delta>0){
		cout<<"Phuong trinh co hai nghiem :"<<"x1="<<y<<"\t"<<"x2="<<z<<endl;
		
	}
	return 0;
	
}
