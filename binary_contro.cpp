#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;
long long NP(int *);
float TBC(float *);
long long NP(int *np){
	int p=0;
	long long temp=0;
	while(*np>0){
		temp+=(*np%2)*pow(10,p);
		*np/=2;
		p++;
	}
	return temp;
}
float TBC(float *tbc){
	float sothuc;
	sothuc=*tbc+(*tbc*2)+ (*tbc/2);
	
return sothuc/3;
}
int main(){
	int n;
	float m,medianfile,chon;
	long long nhiphan;
	char *d,b[50]={"C:\>binary Decimal Value"};
	char *e,db[50]={"C:\>median FileName"};
	int i,j;
	d=b;
	e=db;
	char *c=new char[50];
		cout<<"\n-------------Binary-------------"<<endl;
		cout<<"C:\>binary Decimal Value";
		system("pause");
		gets(c);
			for( i=0; i<=0; i++){
				if(*c==*b){
				cout<<"Nhap vao mot so thap phan: ";cin>>n;
				nhiphan=NP(&n);
				cout<<"Gia tri nhi phan tuong ung: "<<nhiphan;
				}
			}
		cout<<endl;
		//----------------median---------------
		cout<<"C:\>median FileName";
		system("pause");
		gets(c);
		for( j=0; j<=0; j++){
			if(*c==*e){
				cout<<"Nhap vao mot so thuc: ";cin>>m;
				medianfile=TBC(&m);
				cout<<"Gia tri TB cua cac gia tri trong FileName: "<<medianfile<<endl;
			}
		}
		delete []c;
		return 0;
}
