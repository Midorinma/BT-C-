#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	for(int i=1; i<=100; i++){
		for(int j=1; j<=10; j++)
		{
			x=i*j;
			cout<<setw(5)<<x;
		}
		cout<<endl;
	}
	return 0;
}
