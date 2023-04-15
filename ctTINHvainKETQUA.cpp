#include<iostream>
using namespace std;
int main(){
	int a,b;
	char pheptoan;
	cout<<"Nhap so nguyen a: ";
	cin>>a;
	cout<<"Nhap so nguyen b: ";
	cin>>b;
	cout<<"Nhap phep toan: ";
	cin>>pheptoan;
	cout<<"------------------------------------\n";
	switch(pheptoan){
		case '+': cout<<"Ket Qua: "<<a+b;
		break;
		case '-': cout<<"Ket Qua: "<<a-b;
		break;
		case '*':cout<<"Ket Qua: "<<a*b;
		break;
		case '/':
			if(b==0){
				cout<<"Khong chia duoc cho 0.";
				break;
			}
			else{
				cout<<(float)a/b;
			}
		case '%':cout<<"Ket Qua: "<<a%b;
		break;
	}
	return 0;
}
