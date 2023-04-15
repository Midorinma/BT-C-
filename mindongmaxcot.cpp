#include<iostream>
#include<iomanip>
using namespace std;
void NhapMang( int a[][50], int m, int n ){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void XuatMang( int a[][50], int m, int n ){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
void timMINhang(int a[][50], int m, int n){
	int min;
	int hang=1;
	for(int i=0; i<m; i++){
		min=a[i][0];
		for(int j=0; j<n; j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
		cout<<"so nho nhat trong hang "<<hang<<" la: "<<min<<endl;
		hang++;
	}
}
void timMAXcot(int a[][50], int x1, int x2, int y1, int y2){
	int i,j=0;
	int max=a[0][0];
	int cot=1;
	while(j<=x2){
		for( i=y1; i<=y2; i++){
			max=a[i][j]>max? a[i][j]:max;
		}
		cout<<"Gia tri lon nhat cua cot "<<cot<<" la "<<max<<endl;
		j++;
		max=a[0][j];
		cot++;
	}
}
int main(){
	int a[50][50];
	int m,n;
	cout<<"Nhap gia tri cua hang: ";
	cin>>m;
	cout<<"Nhap gia tri cua cot: ";
	cin>>n;
	NhapMang(  a,  m,  n );
	XuatMang(a, m, n );
	timMINhang(a, m, n);
	cout<<endl;
	int x1=0, x2=n-1;
	int y1=0, y2=m-1;
	timMAXcot(a,x1,x2,y1,y2);
	
}
