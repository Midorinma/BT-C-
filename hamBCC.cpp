#include<iostream>
#include<iomanip>
using namespace std;
int BCC(){
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			cout<<setw(5)<<i*j;
		}
		cout<<endl;
		cout<<endl;
	}	
}
int main(){
	cout<<"------------------BANG CUU CHUONG----------------------"<<endl;
	BCC();
}
