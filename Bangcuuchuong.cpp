#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j;
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			cout<<i*j<<setw(5);
			
		}
		cout<<"\n";
	}
}
