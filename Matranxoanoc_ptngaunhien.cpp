#include<iostream>
#include<iomanip>
#include<time.h>
#include<stdlib.h>
using namespace std;
void Matran(int a[100][100], int cot, int hang, int n){
	int d=0,i;
	while(d<=n/2){
		srand((int)time(0));
		int gt=rand()%10+1;
		
		for(i=d; i<=cot; i++) a[d][i]=gt++;
		gt+=rand()%10+1;
		for(i=d+1; i<=hang; i++) a[i][cot]=gt++;
		gt+=rand()%10+1;
		for(i=cot-1; i>=d; i--) a[hang][i]=gt++;
		gt+=rand()%10+1;
		for( i=hang-1; i>d; i--) a[i][d]=gt++;
		gt+=rand()%10+1;
		d++; hang--; cot--;
	}
}
void XuatMang( int a[100][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int a[100][100];
	int n;
	tiep: cout<<"Nhap vao gia tri n: ";cin>>n;
	if(n<0){
		goto tiep;
	}
	int cot = n-1;
	int hang = n-1;
	Matran( a, cot, hang,n);
	XuatMang(a, n);
}
