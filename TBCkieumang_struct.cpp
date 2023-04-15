#include<iostream>
#define MAX 5
using namespace std;
typedef struct{
	char ten[20];
	int tuoi;
	char gioitinh;
	double chieucao;
	double cannang;
}Connguoi;
int main(){
	Connguoi nguoi[MAX]={{"Duy",25,'M',165.4,72.5},{"Linh",19,'F',161.7,44.2},{"Thang",20,'M',175.2,66.3}
	,{"Tien",26,'F',159.3,48.5},{"Thuy",27,'F',172.8,67.2}};
	double chieucao_sum=0.0, cannang_sum=0.0, chieucao_ave, cannang_ave;
	for(short i=0; i<5; i++){
		chieucao_sum+=nguoi[i].chieucao;
		cannang_sum+=nguoi[i].cannang;
	}
	chieucao_ave=chieucao_sum/5;
	cannang_ave=cannang_sum/5;
	cout<<chieucao_ave<<" , "<<cannang_ave;
}
