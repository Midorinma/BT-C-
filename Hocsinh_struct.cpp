#include<iostream>
#include<string.h>
using namespace std;
struct HS{
	int Chieucao;
	string Ten;
	int Tuoi;
	string Xeploai;
};
typedef struct{
	int Chieucao;
	string Ten;
	int Tuoi;
	string Xeploai;
}HSnam;
int main(){
	//Khoi tao thuc the hocsinh bang cach gan  va in gia tri struct HSnu
	struct HS Hocsinh;
	Hocsinh.Chieucao=150;
	Hocsinh.Ten="Trang";
	Hocsinh.Tuoi=15;
	Hocsinh.Xeploai="Kha";
	cout<<"Ten: "<<Hocsinh.Ten<<" Tuoi: "<<Hocsinh.Tuoi<<" Xeploai: "<<Hocsinh.Xeploai;
	cout<<endl;
	// khoi tao thuc the HSnam bang cach gan truc tiep gia tri
	struct HS Hocsinhnam={170,"Tuan",15,"TB"};
	 cout<<"Ten: "<<Hocsinhnam.Ten<<" Tuoi: "<<Hocsinhnam.Tuoi<<" Xeploai: "<<Hocsinhnam.Xeploai;
	 cout<<endl;
	//khoi tao thuc the bang typedef struct
	HSnam nam={172,"Nam",15,"Kha"};
	cout<<"Ten: "<<nam.Ten<<" Tuoi: "<<nam.Tuoi<<" Xeploai: "<<nam.Xeploai;
	return 0;
}
