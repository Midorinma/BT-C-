#include<iostream>
#include<iomanip>
using namespace std;
void NhapMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void XuatMang(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
void Maxdong(int a[][100], int m, int n, int &max){
	int dong=1;
	for(int i=0; i<m; i++){
		max=a[i][0];
		for(int j=0; j<n; j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
		cout<<"max dong "<<dong<<" la: "<<max<<endl;
		dong++;
	}
}
void Mincot(int a[][100], int x1, int x2, int y1, int y2, int &min){
	int i,j=0;
	int cot=1;
	while(j<=x2){
		min=a[0][j];
		for( i=y1; i<=y2; i++){
			min=a[i][j]< min? a[i][j]: min;
		}
		cout<<"min cot "<<cot<<" la: "<<min<<endl;
		cot++;
		j++;
	}
	
}
int main(){
	int a[100][100];
	int m,n;
	int max,min;
	int *p, *c;
	cout<<"Nhap vao gia tri hang: ";cin>>m;
	cout<<"Nhap vao gia tri cot: ";cin>>n;
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	cout<<endl;
	Maxdong( a, m, n,max);
	
	int x1=0, x2=n-1;
	int y1=0, y2=m-1;
	Mincot( a, x1, x2, y1, y2,min);
	cout<<endl;
	p=&min;
	c=&max;
	if(*c==*p){
		cout<<"diem yen ngua: "<<*c;
	}
}
