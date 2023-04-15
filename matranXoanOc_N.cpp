#include<iostream>
#include<iomanip>
using namespace std;

void Xoanoc(int a[100][100], int n,int hang, int cot, int *gt){
	int i;
	int d=0;
	while(d<=n/2){
		for(i=d; i<=cot; i++) a[d][i]=(*gt)++;
		
		for(i=d+1; i<=hang; i++) a[i][cot]=(*gt)++;
		
		for(i=cot-1; i>=d; i--) a[hang][i]=(*gt)++;
		
		for(i=hang-1; i>d; i--) a[i][d]=(*gt)++;
		d++; hang--; cot--;
	}
}
void XuatMang(int a[100][100], int n){
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
	cout<<"Ma tran vuong cap n = ";cin>>n;
	int hang=n-1;
	int cot=n-1;
	int gt=1;
	Xoanoc( a, n, hang, cot, &gt);
	XuatMang( a , n );
	return 0;
}
