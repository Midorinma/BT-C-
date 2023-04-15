#include<iostream>
#include<string.h>
using namespace std;
typedef struct{
	string Ten;
	int Tuoi;
	int Chieucao;
	int Cannang;
}Connguoi;
int main(){
	Connguoi nam, *male;
	male=&nam;
	male->Ten="Duy";
	male->Tuoi=25;
	male->Chieucao=172;
	male->Cannang=68;
	cout<<male->Ten<<" "<<male->Tuoi<<" "<<male->Chieucao<<" "<<male->Cannang;
	cout<<endl;
	Connguoi nu, *female;
	female=&nu;
	*female=*male;
	cout<<female->Ten<<" "<<female->Tuoi<<" "<<female->Chieucao<<" "<<female->Cannang;
	return 0;
}
