#include<iostream>
#include<iomanip>
#include<stdlib.h>//khoi tao ham su dung malloc va free
using namespace std;
void NhapMang(int **contro, int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>contro[i][j];
		}
	}
}
void XuatMang(int **contro, int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<setw(5)<<contro[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int m,n;
	cout<<"Nhap vao so hang: ";cin>>m;
	cout<<"Nhap vao so cot: ";cin>>n;
	int **contro;
	 /*cap phat bo nho dong cho hang va gan dia chi bo nho cho contro*/
	contro=(int**)malloc(sizeof(int *)*m);
	/*cap phat bo nho dong cho cot va gan dia chi bo nho  cho contro*/
	for(int i=0; i<m; i++){
		contro[i]=(int*)malloc(sizeof(int)*n);
	}
	cout<<"Nhap mang: "<<endl;
	NhapMang(contro,m,n);
	cout<<"Xuat Mang: "<<endl;
	XuatMang(contro, m, n);
	//giai phong bo nho chua cac phan tu
	for(int i=0; i<m; i++){
		free(contro[i]);
	}
	//giai phong bo nho chua dia chi
	free(contro);
	system("pause");
	return 0;
}
