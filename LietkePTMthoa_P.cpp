#include<iostream>
#include<math.h>
#include<iomanip>
#define MAX 100
using namespace std;
//----------NHAPXUAT----------------------
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<a[i];
	}
}
//--------------SOCHAN--------------
int Sochan(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			cout<<setw(3)<<a[i];
		}
		else{
			continue;
		}	
	}
}
int Demsochan(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			Dem++;
		}
		else{
			continue;
		}	
	}
	return Dem;
}
int Tongsochan(int a[], int n){
	int Sum=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			Sum+=a[i];
		}
		else{
			continue;
		}	
	}
	return Sum;
}
//-----------SODUONG---------------
int Soduong(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]>0){
			cout<<setw(3)<<a[i];
		}
		else{
			continue;
		}
	}
}
int Demsoduong(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			++Dem;
		}
		else{
			continue;
		}
	}
	return Dem;
}
int Tongsoduong(int a[], int n){
	int Sum=0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			Sum+=a[i];
		}
		else{
			continue;
		}
	}
	return Sum;
}
//------------------SNT-----------------------
int KTsnt(int &n){
	int i;
	if(n<2){
		return 0;	
	}
	if(n%2==0){
		return 0;
	}
	for(i=3; i<=sqrt(float(n)); i+=2){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
void LietkeSNT(int a[], int n){
	for(int i=0; i<n; i++){
		if(KTsnt(a[i])==1){
			cout<<setw(3)<<a[i];
		}
		else{
			continue;
		}
	}
}
int DemSNT(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(KTsnt(a[i])==1){
			++Dem;
		}
		else{
			continue;
		}
	}
	return Dem;
}
int TongSNT(int a[], int n){
	int Sum=0;
	for(int i=0; i<n; i++){
		if(KTsnt(a[i])==1){
			Sum+=a[i];
		}
		else{
			continue;
		}
	}
	return Sum;
}
//----------------SCP-----------------
int KTsochinhphuong(int &n){
	int scp;
	for(int i=0; i<=n; i++){
		scp=i*i;
		if(n==scp){
			return 1;
		}
	}
	return 0;
}
void LietkeSCP(int a[], int n){
	for(int i=0; i<n; i++){
		if(KTsochinhphuong(a[i])==1){
			cout<<setw(3)<<a[i];
		}
		else{
			continue;
		}
	}
}
int DemSCP(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(KTsochinhphuong(a[i])==1){
			++Dem;
		}
		else{
			continue;
		}
	}
	return Dem;
}
int TongSCP(int a[], int n){
	int Sum=0;
	for(int i=0; i<n; i++){
		if(KTsochinhphuong(a[i])==1){
			Sum+=a[i];
		}
		else{
			continue;
		}
	}
	return Sum;
}
//----------------SOLANxh--------------

int KTsolanXH(int *phu, int n, int x){
	int i;
	for(i=0; i<n; i++){
		if(phu[i]==x){
			return i;
		}
	}
	return -1;
}
void HienThi(int *phu, int *dem, int n){
	int i;
	for(i=0; i<n; i++){
		cout<<endl;
		cout<<"Gia tri: "<<phu[i]<<" So lan xh: "<<dem[i]<<endl;
	}
}
void SolanXH(int a[], int n){
	int phu[MAX];
	int dem[MAX];
	int Size=0;
	int i;
	for(i=0; i<n; i++){
		dem[i]=0;
	}
	for(i=0; i<n; i++){
		int temp=KTsolanXH(phu, Size, a[i]);
		if(temp==-1){
			phu[Size]=a[i];
			dem[Size]=1;
			Size++;
		}else{
			dem[temp]++;
		}
	}
	HienThi(phu,dem,Size);
}

int main(){
	int a[MAX];
	int n,chon;
	do{
		cout<<"Nhap n: ";cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai!.Can nhap lai";
			cout<<endl;
		}
	}while(n<0 || n>MAX);
	NhapMang(a,n);
	cout<<endl;
	do{
	cout<<endl;
	cout<<"\tCac Phan Tu Mang Thoa Tieu Chuan Cua P\n";
	cout<<"------------------------MENU--------------------------------\n";
	cout<<"1.Liet ke tat ca cac phan tu mang thoa tieu chuan cua P."<<endl;
	cout<<"2.Dem so luong cac phan tu mang thoa tieu chuan cua P"<<endl;
	cout<<"3.Tinh tong cac phan tu mang thoa tieu chuan cua P."<<endl;
	cout<<"4.Tinh trung binh tong cac phan tu mang thoa tieu chuan cua P."<<endl;
	cout<<"5.Thong ke so lan xuat hien cua cac phan tu trong mang."<<endl;
	cout<<"6.Exit"<<endl;
	XuatMang(a,n);
	cout<<endl;
	cout<<"Ban chon? "<<endl;
	cin>>chon;
	//system("cls");
	switch(chon){
		
		case 1:cout<<"+ P la cac so chan: \n";
		Sochan(a,n);
		cout<<endl;
		cout<<"+ P la cac so duong: \n";
		Soduong(a,n);
		cout<<endl;
		cout<<"+ P la cac so chinh phuong: \n";
		LietkeSCP(a,n);
		cout<<endl;
		cout<<"+ P la cac SNT: \n";
		LietkeSNT(a,n);
		break;
		system("pause");
		case 2:cout<<"So luong so chan thoa P: ";
		cout<<Demsochan(a,n)<<endl;
		cout<<"So luong so duong thoa P: ";
		cout<<Demsoduong(a,n)<<endl;
		cout<<"So luong so chinh phuong thoa P: ";
		cout<<DemSCP(a,n)<<endl;
		cout<<"So luong SNT thoa P: ";
		cout<<DemSNT(a,n)<<endl;
		break;
		system("pause");
		case 3:cout<<"Tong so chan thoa P: ";
		cout<<Tongsochan(a,n)<<endl;
		cout<<"Tong so duong thoa P: ";
		cout<<Tongsoduong(a,n)<<endl;
		cout<<"Tong so chinh phuong thoa P: ";
		cout<<TongSCP(a,n)<<endl;
		cout<<"Tong SNT thoa P: ";
		cout<<TongSNT(a,n)<<endl;
		break;
		system("pause");
		case 4:cout<<"TBT so chan thoa P: ";
		cout<<(float)Tongsochan(a,n)/Demsochan(a,n)<<endl;
		cout<<"TBT so duong thoa P: ";
		cout<<(float)Tongsoduong(a,n)/Demsoduong(a,n)<<endl;
		cout<<"TBT so chinh phuong thoa P: ";
		cout<<(float)TongSCP(a,n)/DemSCP(a,n)<<endl;
		cout<<"TBT so nguyen to thoa P: ";
		cout<<(float)TongSNT(a,n)/DemSNT(a,n);
		break;
		system("pause");
		case 5: cout<<"So lan xh cac phantu: ";
		SolanXH(a, n);
		system("pause");
		case 6: return 0;
		break;
		}	
	}while(chon);
} 
