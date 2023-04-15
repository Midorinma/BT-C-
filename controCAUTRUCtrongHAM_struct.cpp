#include<iostream>
using namespace std;
//khai bao cau truc bieu dien so phuc
typedef struct{
	double tra;
	double sua;
}sophuc;
void add(sophuc *a, sophuc *b, sophuc *c){
	(*c).tra=(*a).tra + (*b).tra;
	(*c).sua=(*a).sua + (*b).sua;
}
void show(sophuc *c){
	cout<<(*c).tra<<" + "<<(*c).sua;
}
int main(){
	sophuc x={2.5,5.5};
	sophuc y={2.5,5.5};
	sophuc z;
	
	sophuc *p=&x;
	sophuc *q=&y;
	sophuc *r=&z;
	add(p,q,r);
	show(r);
	return 0;
}
