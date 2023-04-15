#include<iostream>
#define MAX 5
using namespace std;
typedef struct{
	char ten[20];
	int tuoi;
	int chieucao;
	int cannang;
}Connguoi;
int main(){
	Connguoi nam[MAX]={{"Tuan",25,170,65},{"Duong",19,165,60},{"Nam",20,180,62},
	{"Hoang",26,175,70},{"Hai",30,182,75}};
	Connguoi p=nam[2];
	int n=p.tuoi;
	cout<<n;
return 0;
}
