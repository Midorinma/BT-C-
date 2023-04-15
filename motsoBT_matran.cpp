#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//-------------NHAPMANG--------------------
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
//----------Tongcacsochan--------------
int Tongchan(int a[][100], int m, int n){
	int Sum=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]%2==0){
				Sum+=a[i][j];	
			}
		}
	}
	return Sum;
}
//-----------LietkecacSNT--------------
int Check(int n){
	if(n<2){
		return 0;
	}
	if(n>2){
		if(n%2==0){
			return 0;
		}
		for(int i=3; i<=sqrt((float)n); i+=2){
			if(n%i==0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
int Count(int a[][100], int m, int n){
	int Dem=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(Check(a[i][j])==1){
				Dem++;
			}
		}
	}
	return Dem;
}
void Show(int a[][100], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(Check(a[i][j])==1){
				cout<<setw(3)<<a[i][j];
			}
		}
	}
}
//--------------XoaDongCot---------------
void  Xoadong(int a[][100], int &m, int n, int x){
	if(x>=m){
		x=m-1;
	}
	else if(x<0){
		x=0;
	}
	for(int i=x; i<m-1; i++){
		for(int j=0; j<n; j++){
			a[i][j]=a[i+1][j];
		}
	}
	m--;
}
void Xoacot(int a[][100], int m, int &n, int y){
	if(y<0){
		y=0;
	}
	else if(y>=n){
		y=n-1;
	}
	for(int i=0; i<m; i++){
		for(int j=y; j<n-1; j++){
			a[i][j]=a[i][j+1];
		}
	}
	n--;
}
//--------------Doicho2hang2cot------------------
void Hoandoi(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Hoandoi2hang(int a[][100], int m, int n, int hang1, int hang2){
	for(int i=0; i<m; i++){
		if((hang1>=0 && hang1<m)&&(hang2>=0 && hang2<m)){
			for(int j=0; j<n; j++){
				Hoandoi(a[hang1][j],a[hang2][j]);
			}
		}
	}
}
void Hoandoi2cot(int a[][100], int m, int n, int cot1, int cot2){
	for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if((cot1>=0 && cot1<n)&&(cot2>=0 && cot2<n)){
					Hoandoi(a[i][cot1],a[i][cot2]);
				}	
			}
		}
}
//--------------MAXMINtheoduongcheo--------------
int MAX(int a[][100], int n){
	int max=a[0][0];
		for(int j=1; j<n; j++){
				if(a[j][j]>max){
					max=a[j][j];
				}	
		}
	return max;
}
int MIN(int a[][100],int m, int n){
	int min=a[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				if(a[i][j]<min){
					min=a[i][j];
				}
			}
				
		}
	}
	return min;
}
int main(){
	int a[100][100];
	int m,n;
	int chon;
	cout<<"Nhap vao gia tri cua hang: ";cin>>m;
	cout<<"Nhap vao gia tri cua cot: ";cin>>n;
	NhapMang(a,m,n);
	do{
		system("cls");
		cout<<"---------------------MENU-----------------------\n";
		cout<<"0. EXIT."<<endl;
		cout<<"1. Tong cac so chan trong ma tran."<<endl;
		cout<<"2. Dem cac so nguyen to."<<endl;
		cout<<"3. Liet ke cac so nguyen to."<<endl;
		cout<<"4. Xoa dong."<<endl;
		cout<<"5. Xoa cot."<<endl;
		cout<<"6. Hoan doi 2 hang."<<endl;
		cout<<"7. Hoan doi 2 cot."<<endl;
		cout<<"8. Tim MAX tren duong cheo cua ma tran."<<endl;
		cout<<"9. Tim MIN tren duong cheo cua ma tran."<<endl;
		cout<<"Xuat mang: "<<endl;
		XuatMang(a,m,n);
		cout<<"Ban chon? "<<endl;
		cin>>chon;
		switch(chon){
			case 0: 
				return 0;
				break;
			case 1:
			{
				int sum=Tongchan(a,m,n);//phan dinh bien dem o case 2 vs sum o case 1.
				cout<<"Tong cac so chan: "<<sum<<endl;
				system("pause");
				break;
				
			}
			case 2:
			{//dung de phan dinh bien khoi tao khi qua case moi
				int dem=Count(a,m,n);
				cout<<"So nguyen to co trong ma tran la: "<<dem<<endl;
				system("pause");
				break;
			}//CT se bao loi neu khong co dau ngoac nhon 
			case 3:
				Show(a,m,n);
				cout<<endl;
				system("pause");
				break;
			case 4:
			{
				int x;
				cout<<"Nhap so dong can xoa: ";cin>>x;
				Xoadong(a,m,n,x);
				XuatMang(a,m,n);
				system("pause");
				break;
			}	
			case 5:{
				int y;
				cout<<"Nhap so cot can xoa: ";cin>>y;
				Xoacot(a,m,n,y);
				XuatMang(a,m,n);
				system("pause");
				break;
			}
			case 6:{
				int hang1,hang2;
				cout<<"hang 1: ";cin>>hang1;
				cout<<"hang 2: ";cin>>hang2;
				Hoandoi2hang(a,m,n,hang1,hang2);
				XuatMang(a,m,n);
				system("pause");
				break;
			}
			case 7:{
				int cot1,cot2;
				cout<<"Cot 1: ";cin>>cot1;
				cout<<"Cot 2: ";cin>>cot2;
				Hoandoi2cot(a,m,n,cot1,cot2);
				XuatMang(a,m,n);
				system("pause");
				break;
			}
			case 8:
				cout<<"Gia tri Max theo duong cheo cua ma tran la: "<<MAX(a,n)<<endl;
				system("pause");
				break;
			case 9:	
				cout<<"Gia tri Min theo duong cheo cua ma tran la: "<<MIN(a,m,n)<<endl;
				system("pause");
				break;
		}
	}while(chon);
}
