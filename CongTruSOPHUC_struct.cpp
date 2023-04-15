#include<iostream>
using namespace std;
typedef struct{
	float cong;
	float tru;
	float nhan;
	float chia;
}Pheptoan;
void Tinh(Pheptoan *a, Pheptoan *b, Pheptoan *c){
	(*c).cong=(*a).cong + (*b).cong;
	(*c).tru=(*a).tru - (*b).tru;
	(*c).nhan=(*a).nhan * (*b).nhan;
	(*c).chia=(*a).chia / (*b).chia;
}
void show(Pheptoan ab){
	cout<<"= "<<ab.cong<<endl;
	cout<<"= "<<ab.tru<<endl;
	cout<<"= "<<ab.nhan<<endl;
	cout<<"= "<<ab.chia<<endl;
}
int main(){
	Pheptoan a={2.5,5.5,6.3,7.5};
	Pheptoan b={4.6,7.5,9.7,7.7};
	Pheptoan c;
	Pheptoan *d=&a;
	Pheptoan *e=&b;
	Pheptoan *f=&c;
	Tinh(d,e,f);
	show(c);
}
