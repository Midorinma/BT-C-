#include<iostream>
#include<string.h>
#include<iomanip>
#include<math.h>
#define Max 100
using namespace std;
int NhapMang(int a[], int n){
			for(int i=0; i<n; i++){
				cout<<"a["<<i<<"] = ";
				cin>>a[i];
				if(a[i]==0)
				{
					return 0;	
				}
			}
}
int XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(3)<<a[i];
	}
}
int Demsochan(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			Dem++;
		}
	}
	return Dem;
}
int SUMchan(int a[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			sum+=a[i];
		}
	}
	return sum;
}
float TBTchan(int a[], int n){
	float sum=0;
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]>0){
			sum+=a[i];
			dem++;
		}
	}
	return sum/dem;	
}
int KiemtraSNT(int k){
	if(k<2)return 0;
	else if(k>2){
		if(k%2==0){
		return 0;
		}
		for(int j=3; j<=sqrt(float(k));k+=2){
			if(k%j==0){
				return 0;
			}
				}
		}
	return 1;
}
int DemSNT(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(KiemtraSNT(a[i])==1){
			Dem++;
		}
	}
	return Dem;
}
int SUMsonguyento(int a[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(KiemtraSNT(a[i])==1){
			sum+=a[i];
		}
	}
	return sum;
}
float TBTsnt(int a[], int n){
	int Dem=0;
	float sum=0;
	for(int i=0; i<n; i++){
		if(KiemtraSNT(a[i])==1){
			sum+=a[i];
			Dem++;
		}
	}
	return sum/Dem;
}
int Demsoam(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			Dem++;
		}
	}
	return Dem;
}
int SUMam(int a[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			sum+=a[i];
		}
	}
	return sum;
}
float TBTam(int a[], int n){
	float sum=0;
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			sum+=a[i];
			dem++;
		}
	}
	return sum/dem;
}
int Demsole(int a[], int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2!=0 && a[i]>0){
			Dem++;
		}
	}
	return Dem;
}
int SUMle(int a[],int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(a[i]%2!=0 && a[i]>0){
			sum+=a[i];
		}
	}
	return sum;
}
float TBTle(int a[],int n){
	float sum=0;
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2!=0 && a[i]>0){
			sum+=a[i];
			dem++;
		}
	}
	return sum/dem;
}
int kiemtraFIBONACCY(int m){
	if(m<=3 && m>=0){
		return 1;
	}
	int a=2,b=3,x;
	if(m>3){
		for(int i=0; i<m; i++){
			x=a+b;
			a=b;
			b=x;
			if(m==x){
				return 1;
			}	
		}
	}
return 0;
}
int DemsoFIBONACY(int a[], int n){
	int Dem=0;
	for(int i=0; i<n;i++){
		if(kiemtraFIBONACCY(a[i])==1){
			Dem++;
		}
	}
	return Dem;
}
int SUMfibonaccy(int a[], int n){
	int sum=0;
	for(int i=0; i<n;i++){
		if(kiemtraFIBONACCY(a[i])==1){
			sum+=a[i];
		}
	}
	return sum;
}
float TBTfibonaccy(int a[], int n){
	float sum=0;
	int dem=0;
	for(int i=0; i<n;i++){
		if(kiemtraFIBONACCY(a[i])==1){
			sum+=a[i];
			dem++;
		}
	}
	return sum/dem;
}
int main(){
	int a[Max];
	int n;
	do{
		cout<<"Nhap vao n: ";cin>>n;
		if(n<=0 || n>Max){
			cout<<"Nhap sai.Xin nhap lai!"<<endl;
		}
	}while(n<=0 || n>Max);
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<endl;
	int Dem=Demsochan(a,n);
		cout<<"1.So luong so chan : "<<Dem<<endl;
	int add=DemSNT(a,n);
		cout<<"2.so luong so nguyen to : "<<add<<endl;
	int am=Demsoam(a,n);
		cout<<"3.so luong so am : "<<am<<endl;
	int Le=Demsole(a,n);
		cout<<"4.so luong so le : "<<Le<<endl;
	int fibonacy=DemsoFIBONACY(a,n);
		cout<<"5.so luong so fibonaci : "<<fibonacy<<endl;
	cout<<"-----------------------------------------------------\n";
	int sumchan=SUMchan(a,n);
	cout<<"1.Tong cac so thoa tieu chuan P la cac so chan: "<<sumchan<<endl;
	int sumSNT=SUMsonguyento(a,n);
	cout<<"2.Tong cac so thoa tieu chuan P la cac so nguyen to: "<<sumSNT<<endl;
	int sumAM=SUMam(a,n);
	cout<<"3.Tong cac so thoa tieu chuan P la cac so am: "<<sumAM<<endl;
	int sumle=SUMle(a,n);
	cout<<"4.Tong cac so thoa tieu chuan P la cac so le: "<<sumle<<endl;
	int sumfibo=SUMfibonaccy(a,n);
	cout<<"5.Tong cac so thoa tieu chuan P la cac so fibonaci: "<<sumfibo<<endl;
	cout<<"-----------------------------------------------------\n";
	float tbtchan=TBTchan(a,n);
	cout<<"1.Trung binh tong cac so thoa tieu chuan P la cac so chan: "<<tbtchan<<endl;
	float tbtSNT=TBTsnt(a,n);
	cout<<"2.Trung binh tong cac so thoa tieu chuan P la cac so nguyen to: "<<tbtSNT<<endl;
	float tbtAM=TBTam(a,n);
	cout<<"3.Trung binh tong cac so thoa tieu chuan P la cac so am: "<<tbtAM<<endl;
	float tbtLE=TBTle(a,n);
	cout<<"4.Trung binh tong cac so thoa tieu chuan P la cac so le: "<<tbtLE<<endl;
	float tbtFIBONACCY=TBTfibonaccy(a,n);
	cout<<"5.Trung binh tong cac so thoa tieu chuan P la cac so FIBONACCI: "<<tbtFIBONACCY<<endl;
	
}
