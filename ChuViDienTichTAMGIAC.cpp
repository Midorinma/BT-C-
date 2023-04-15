#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int AB,AC,BC,Chuvi,p;
	float S;
	cout<<"Nhap vao ba canh cua mot tam giac :\n";
	cin>>AB>>AC>>BC;
	Chuvi=AB+AC+BC;
	p=(AB+AC+BC)/2;
	S=sqrt(p*(p-AB)*(p-AC)*(p-BC));
	cout<<"Chu vi hinh tam giac la :"<<Chuvi<<endl;
	cout<<"Dien tich hinh tam giac la :"<<S<<endl;
	return 0;
}
