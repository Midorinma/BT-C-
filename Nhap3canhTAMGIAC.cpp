#include<iostream>
#include<cstdlib>
using namespace std;
void KTtamgiac(int a, int b, int c){
	
	if((a+b)<=c || (a+c)<=b || (b+c)<=a)
	{
		cout<<"Khong phai la ba canh cua tam giac."<<endl;
	}
	else{
		if( a==b && a==c && b==c){
			cout<<"tam giac deu."<<endl;
		
		}
		if( c==b || c==a || a==b){
			cout<<"Tam giac can."<<endl;
			
		}
		if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
			cout<<"tam giac vuong can."<<endl;
		}
		else{
			cout<<"Tam giac thuong."<<endl;
			
		}
	}
}
int main(){
	int a,b,c;
	cout<<"Nhap canh a: ";cin>>a;
	cout<<"Nhap canh b: ";cin>>b;
	cout<<"Nhap canh c: ";cin>>c;
	cout<<"-----------------------\n";
	while(a<0 || b<0 || c<0){
	cout<<"Gia tri khong hop le.NHAP LAI"<<endl;
	cout<<"Nhap canh a: ";cin>>a;
	cout<<"Nhap canh b: ";cin>>b;
	cout<<"Nhap canh c: ";cin>>c;
	}
	KTtamgiac(a,b,c);
	
	
}
