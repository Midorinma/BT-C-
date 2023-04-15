#include<iostream>
using namespace std;
typedef struct{
	double re;
	double im;
}sophuc;
void show(sophuc num){
	cout<<num.re<<" + "<<num.im;
	
}
int main(){
	sophuc a={2.5,5.5};
	show(a);
}
