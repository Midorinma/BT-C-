#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c,i;
	for(i=100; i<=999;i++){
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(a*b*c==a+b+c){
			cout<<setw(3)<<a<<b<<c;
		}
	}

}
