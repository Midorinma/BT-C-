#include<iostream>
using namespace std;
typedef struct{
	double im;
	double re;
}sophuc;
//tao ham nhan , tinh toan va tra ve thuc the cua cau truc
sophuc add(sophuc a, sophuc b){
	sophuc c;
	c.im=a.im+b.im;
	c.re=a.re+b.re;
	return c;
}
void show(sophuc c){
	cout<<c.re<<" + "<<c.im;
}
int main(){
	sophuc a={2.5,5.5};
	sophuc b={2.5,5.5};
	sophuc num;
	num=add(a,b);
	show(num);
}
