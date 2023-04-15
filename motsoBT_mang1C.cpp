#include<iostream>
#include<iomanip>
#include<math.h>
#define MAX 100
using namespace std;
//--------------NHAPXUAT--------------
void NhapMang(int a[], int &n){
	do{
		cout<<"Nhap gia tri cua mang: ";cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai! can nhap lai."<<endl;
		}
	}while(n<0 || n>MAX);
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
}
//------------SoChinhPhuong------------
int KT(int n){
	for(int i=0; i<=MAX; i++){
		if(n==(i*i)){
			return 1;
		}
	}
	return 0;
}
int DemSCP(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(KT(a[i])==1){
			Dem++;
		}
	}
	return Dem;
}
//-----------SoNguyenTo--------------
int KTsnt(int n){
	if(n<2){
		return 0;
	}
	else if(n>2){
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
void SNT(int a[], int n){
	int i;
	cout<<"SNT co trong mang la: ";
	for(i=0; i<n; i++){
		if(KTsnt(a[i])==1){
			cout<<setw(5)<<a[i];
		}
	}
}
//----------ThayTheXoa pt Am------------
int replace(int a[], int &n){
	for(int i=0; i<n; i++){
		if(a[i]<0){
			a[i]=0;
		}
	}
}
int Delete(int a[], int &n){
	int i,j;
	for( i=0; i<n; i++){
		if(a[i]<0){
			for( j=i; j<n; j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
	
	cout<<endl;
}	
//-----------------Sapxep---------------
void Hoandoi(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Sorttang(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				Hoandoi(a[i],a[j]);
			}
		}
	}
}
void Sortgiam(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				Hoandoi(a[i],a[j]);
			}
		}
	}
}
//------------chenPTvaomang----------------------
void Chenmang(int a[], int &n, int pos, int v){
	if(pos<0){
		pos=0;
	}
	if(pos>n){
		pos=n;
	}
	for(int i=n; i>pos; i--){
		a[i]=a[i-1];
	}
	a[pos]=v;
	n++;
	Sortgiam(a,n);
}
//-----------cacsochan && vitri cua so chan do----------
void Sochan(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			//for(int j=0; j<n; j++){
				//if(a[j]==a[i]){
					cout<<"so chan: "<<a[i]<<" tai vi tri: "<<i+1<<endl;
				//}
			//}
		}
	}
}
int main(){
	int a[MAX];
	int n,chon;
	NhapMang(a,n);
	do{
		system("cls");
		cout<<"----------------MENU------------------\n";
		cout<<"0. EXIT"<<endl;
		cout<<"1. Dem cac so chinh phuong co trong mang."<<endl;
		cout<<"2. Hien thi cac so nguyen to co trong mang."<<endl;
		cout<<"3. Thay the cac phan tu am co trong mang bang 0."<<endl;
		cout<<"4. Xoa cac phan tu am co trong mang."<<endl;
		cout<<"5. Sap xep cac phan tu tang dan."<<endl;
		cout<<"6. In ra man hinh cac so chan va vi tri so chan co trong day."<<endl;
		cout<<"7. Sap xep cac phan tu giam dan"<<endl;
		cout<<"8. Chen cac phan tu vao mang (gia tri van giam dan)."<<endl;
		XuatMang(a,n);
		cout<<"Ban chon?\n";
		cin>>chon;
		switch(chon){
			case 0:
			return 0;
			break;
			case 1:
				cout<<"So chinh phuong co trong mang: "<<DemSCP(a,n)<<endl;
				system("pause");
				break;
			case 2:
				SNT(a,n);
				cout<<endl;
				system("pause");
				break;
			case 3:
				replace(a,n);
				XuatMang(a,n);
				system("pause");
				break;
			case 4:
				Delete(a,n);
				XuatMang(a,n);
				system("pause");
				break;
			case 5:
				Sorttang(a,n);
				XuatMang(a,n);
				system("pause");
				break;
			case 6:
				Sochan( a, n);
				system("pause");
				break;
			case 7:
				Sortgiam(a,n);
				XuatMang(a,n);
				system("pause");
				break;
			case 8:
				{
					int pos,v;
					cout<<"Nhap vao phan tu muon chen.";cin>>v;
					Chenmang(a,n,pos,v);
					XuatMang(a,n);
					system("pause");
					break;
				}
			
		}
	}while(chon);
}
