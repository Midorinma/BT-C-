#include<iostream>
using namespace std;
double Hoandoi(float x, float  y){
	double temp=x;
	x=y;
	y=temp;
	cout<<x<<" "<<y;
}
int main(){
	int i1=11, i2=22;
	double d1=3.45, d2=6.78;
	double *p1, *p2;
	int *ptr1, *ptr2;
	int temp;
	p1=&d1;
	p2=&d2;

	ptr1=&i1;
	ptr2=&i2;
	//p2=&i2; cau lenh nay sai
	cout<<"Dia chi cua d1 cho *p1: ";
	cout<<p1<<endl;
	cout<<"+ Gia tri cua *p1: ";
	cout<<*p1<<endl;
	/*cout<<"Dia chi cua i2 cho *p2: ";
	cout<<p2;*/ //vi khong cung kieu con tro nen cau lenh nay sai
	cout<<"+ Gia tri cua *p2: ";
	cout<<*p2<<endl;
	
	cout<<"+ Hoan doi hai gia tri d1 va d2: ";
	Hoandoi(*p1,*p2);
	cout<<endl;
	
	p2=&d1;
	cout<<"+ Gia tri cua *p2=*p1: ";
	cout<<*p2<<endl;
	cout<<"+ Gia tri cua *ptr1: ";
	cout<<*ptr1<<endl;
	cout<<"+ Gia tri cua *ptr2: ";
	cout<<*ptr2<<endl;
	ptr1=&i2;
	cout<<"+ Gia tri cua *ptr1=*ptr2: ";
	cout<<*ptr1<<endl;

	return 0;
}
