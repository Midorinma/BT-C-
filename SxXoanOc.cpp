#include<iostream>
#include<iomanip>
using namespace std;
void Tang( int a[100][100], int, int, int, int, int* );
void Giam( int a[100][100], int, int, int, int, int* );
void Tang(int a[100][100], int x1, int x2, int y1, int y2, int *d){
	int i;
	for(i=x1; i<=x2; i++){
		a[y1][i]=(*d)++;
	}
	for(i=y1+1; i<=y2; i++){
		a[i][x2]=(*d)++;
	}
	if(x1<x2 && y1<y2){
		x2--;
		y1++;
		Giam(a,x1,x2,y1,y2,d);
	}
}
void Giam(int a[100][100], int x1, int x2, int y1, int y2, int *d){
	int j;
	for(j=x2; j>=x1; j--){
		a[y2][j]=(*d)++;
	}
	for(j=y2-1; j>=y1; j--){
		a[j][x1]=(*d)++;
	}
	if(x1<x2 && y1<y2){
		x1++;
		y2--;
		Tang( a, x1, x2, y1, y2, d );
	}
}
void Show(int a[100][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int a[100][100];
	int m,n;
	int d=1;
	cout<<"Nhap vao gia tri cua hang: ";cin>>m;
	cout<<"Nhap vao gia tri cua cot: ";cin>>n;
	int x1=0, x2=n-1;
	int y1=0, y2=m-1;
	Tang( a, x1,  x2, y1, y2, &d);
	Show( a, m, n);
}
