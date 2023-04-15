#include<iostream>
#include<string.h>
using namespace std;
struct Sinhvien{
	string masv;
	string tensv;
	int old;
};
typedef struct Sinhvien sv;
int main(){
	sv nam; //={1421214,thang,25};
	nam.masv="17110021";
	nam.tensv="Duy";
	nam.old=25;
	cout<<"MSSV:"<<nam.masv<<"_Tensv:"<<nam.tensv<<"_Tuoi:"<<nam.old;
	return 0;
}
