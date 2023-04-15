#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX 100
using namespace std;
void NhapMang(int *contro, int n){
	for(int i=0; i<n; i++){
		cout<<"*a["<<i<<"]= ";
		cin>>contro[i];
	}
}
void XuatMang(int *contro, int n){
	for(int i=0; i<n; i++){
		cout<<setw(5)<<contro[i];
	}
}
//--------------RanDom----------------------
int TaoMangNgauNhien(int *contro, int n){
	srand((int)time(0));
	for(int i=0; i<n; i++){
		*(contro+i)=rand()%50+1;
	}
	cout<<setw(10)<<*contro;
}
//-------------LietKeDoiXung-----------------
bool KTdoixung(int m){
	int temp,r,sum=0;
	for(temp=m; m!=0; m=m/10){
		r=m%10;
		sum=sum*10+r;
	}
	if(temp==sum){
		return 1;
	}
	return 0;
}
int LietKeDX(int *contro, int n){
	for(int i=0; i<n; i++){
		if(KTdoixung(contro[i])==1){
			cout<<setw(10)<<contro[i];
		}
		else{
			continue;
		}
	}
}
bool KTmangDX(int *contro, int n){
	int *tam;
	tam=&contro[n-1];
	for(int i=0; i<n; i++){
		if(contro[i]==*tam){
			return true;
		}
		else{
			return false;
		}
		tam--;
	}
	return false;
}
//------------TimChuSoleDauTien---------------
bool KTsole(int n){
	int temp=n;
	while(temp>9){
		temp/=10;
	}
	if(temp%2 !=0 ){
		return true;
	}
	else{
		return false;
	}
}
void sole(int *contro, int n){
	cout<<"Chu so le dau tien la: ";
	for(int i=0; i<n; i++){
		bool check=KTsole(contro[i]);
		if(check==true){
			cout<<setw(10)<<contro[i];
		}
		if(check==false){
			continue;
		}
	}
}
//------------------2^k-------------------------
bool KTsomu(int x){
	int i=0;
	while(true){
		if(pow(2,i)==x){
			return true;
		}
		if(pow(2,i)>x){
			return false;
		}
		i++;
	}
	return false;
}
int LietKeSoMu(int *contro, int n){
	for(int i=0; i<n; i++){
		bool check=KTsomu(contro[i]);
		if(check==true){
			cout<<setw(10)<<contro[i];
		}
		if(check==false){
			continue;
		}
	}
}
//-------------------MAX----------------------
int max(int *contro, int n){
	int a=contro[0];
	for(int i=0; i<n; i++){
		a=contro[i]>a? contro[i]:a;
	}
	return a;
}
//--------------------BCNN----------------------
int BCNN(int *contro, int n){
	int MA=max(contro,n);
	int bcnn=MA;
	while(true){
		bool check=true;
		for(int i=0; i<n; i++){
			if(bcnn%contro[i]!=0){
				check=false;
				break;
			}
		}
		if(check==true){
			return bcnn;
		}
		bcnn+=MA;
	}
}
//----------------ChuSoXuatHienItNhat----------------
void LietKeChuSoXuatHienItNhat(int* contro, int n)
{
	int demchuso[10] = {0}; 
	for(int i = 0; i < n; i++)
	{
		if(contro[i] == 0)
		{
			demchuso[0]++;
		}
		else
		{
			int temp = contro[i];
			while(temp != 0)
			{
				int chuso = temp % 10;
				demchuso[chuso]++;
				temp /= 10;
			}
		}
	}
	int min = 0;
	for(int i = 0; i < 10; i++)
	{
		if(demchuso[i] != 0)
		{
			if(min == 0)
				min = demchuso[i];
			else
			{
				if(demchuso[i] < min)
				{
					min = demchuso[i];
				}
			}
		}
	}
	cout << "Nhung chu so xuat hien it nhat trong mang la: ";
	for(int i = 0; i < 10; i++)
	{
		if(demchuso[i] == min)
			cout << i <<" ";
	}
}
//--------------------TongPTCoChuSoDauLe------------------------
int TongPT(int *contro, int n){
	int sum=0;
	for(int i=0; i<n; i++){
		bool KT=KTsole(contro[i]);
		if(KT==true){
			sum+=contro[i];
		}
		else{
			continue;
		}
	}
	return sum;
}
//-----------------TBCCacSoNT---------------------
int KTSNT(int n){
	if(n<2){
		return 0;
	}
	if(n>2){
		if(n%2==0){
			return 0;
		}
		for(int i=3; i<=sqrt(float(n)); i+=2){
			if(n%i==0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
int DemSNT(int *contro, int n){
	int Dem=0;
	for(int i=0; i<n; i++){
		if(KTSNT(contro[i])==1){
			Dem++;
		}
		else{
			continue;
		}
	}
	return Dem;
}
int TBC(int *contro, int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(KTSNT(contro[i])==1){
			sum+=contro[i];
		}
		else{
			continue;
		}
	}
	return sum;
}
//--------------ThemXoaPT-------------------
void themPT(int *contro, int &n, int giatrithem, int vitrithem){
	int i;
	cout<<"Nhap gia tri them: ";cin>>giatrithem;
	cout<<"Nhap vi tri them: ";cin>>vitrithem;
	vitrithem--;
	n++;
	int *b=new int [n];
	for(i=0; i<n-1; i++)
		b[i]=contro[i];//copy vi tri mang contro
	
	for( i=n-1; i>vitrithem; i--)
		b[i]=b[i-1];
	b[vitrithem]=giatrithem;
	delete []contro;
	contro=new int[n];
	for( i=0; i<n; i++)
		contro[i]=b[i];
}
void XoaPT(int *contro, int &n, int vitrixoa){
	int i;
	vitrixoa--;
	n--;
	int *c=new int [n];//cap phat vung nho moi
	for( i=0; i<n+1; i++){
		c[i]=contro[i];//sao chep pt sang mang moi
	}
	for(i=vitrixoa; i<n+1; i++)
		c[i]=c[i+1];//xoa pt
	delete []contro;
	contro=new int [n];
	for(i=0; i<n; i++)
		contro[i]=c[i];//copy phan tu phu sang pt moi
	
}
void XoaPTtrung(int *contro, int &n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(contro[i]==contro[j]){
				XoaPT(contro,n,i);
				i--;
			}
		}
	}
}
//-------------------ThongKeSoLanXH-------------------
int KT(int *b, int n, int x){
	for(int i=0; i<n; i++){
		if(b[i]==x){
			return i;
		}
	}
	return -1;
}
void hienthi(int *b, int *c, int n){
	int i;
	for(i=0; i<n; i++){
		cout<<"gt: "<<b[i]<<" xuat hien "<<c[i]<<" lan."<<endl;
	}
}
void Dem(int *contro, int n){
	int b[MAX],c[MAX];
	int Size=0,i;
	for( i=0; i<n; i++){
		c[i]=0;
	}
	for( i=0; i<n; i++){
		int index=KT(b,Size,contro[i]);
		if(index==-1){
			b[Size]=contro[i];
			c[Size]=1;
			Size++;
		}
		else{
			c[index]++;
		}
	}
	hienthi(b,c,Size);
}
int main(){
	int n,chon;
	int *contro=NULL;
	contro=new int [n];
	do{
		cout<<"Nhap n: ";cin>>n;
		if(n<0 || n>100){
			cout<<"Nhap sai! vui long nhap lai.";
		}
	}while(n<0 || n>100);
	NhapMang(contro,n);
	do{
		system("cls");
		XuatMang(contro,n);
		cout<<"\n---------------------BTTH----------------------\n";
		cout<<"0. EXIT\n";
		cout<<"1. Tao mang ngau nhien.\n";
		cout<<"2. Liet ke so doi xung.\n";
		cout<<"3. Tim so co chu so le dau tien.\n";
		cout<<"4. Liet ke so co dang 2^k.\n";
		cout<<"5. Tim MAX.\n";
		cout<<"6. Tim BCNN.\n";
		cout<<"7. Liet ke chu so xuat hien it nhat.\n";
		cout<<"8. Tong phan tu co chu so dau le.\n";
		cout<<"9. Trung binh cong cac so nguyen to.\n";
		cout<<"10. Them phan tu.\n";
		cout<<"11. Xoa phan tu.\n";
		cout<<"12. Xoa phan  tu trung.\n";
		cout<<"13. Thong ke so lan xuat hien cac PT.\n";
		cout<<"14. Kiem tra mang doi xung.\n";
		cout<<"Ban chon? \n";
		cin>>chon;
		switch(chon){
			case 0: 
				return 0;
				break;
			case 1:
				TaoMangNgauNhien(contro,n);
				system("pause");
				break;
			case 2:
				LietKeDX(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 3: 
				sole(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 4:
				cout<<"2^k : ";
				LietKeSoMu(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 5:{
				int mx=max(contro,n);
				cout<<"MAX: ";
				cout<<mx<<endl;
				system("pause");
				break;
			}
			case 6:{
				int bc=BCNN(contro,n);
				cout<<"BCNN: ";
				cout<<bc<<endl;
				system("pause");
				break;
			}
			case 7:
				LietKeChuSoXuatHienItNhat(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 8:{
				int tong=TongPT(contro,n);
				cout<<"Tong phan tu co chu so dau le: "<<tong<<endl;
				system("pause");
				break;
			}
			case 9:
				cout<<"TBC cac so nguyen to: "<<(float)TBC(contro,n)/DemSNT(contro,n)<<endl;
				system("pause");
				break;
			case 10:{
				int giatrithem,vitrithem;
				themPT(contro,n,giatrithem,vitrithem);
				XuatMang(contro,n);
				cout<<endl;
				system("pause");
				break;
			}
			case 11:{
				int vitrixoa;
				cout<<"Delete: ";cin>>vitrixoa;
				XoaPT(contro,n,vitrixoa);
				XuatMang(contro,n);
				cout<<endl;
				system("pause");
				break;
			}	
			case 12:
				XoaPTtrung(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 13:
				Dem(contro,n);
				cout<<endl;
				system("pause");
				break;
			case 14:
				if(KTmangDX(contro,n)==true){
					cout<<"mang doi xung.";
				}
				else{
					cout<<"mang khong doi xung.";
				}
				cout<<endl;
				system("pause");
				break;

		}
	}while(chon);
	if(contro!=NULL){
		delete []contro;
	}
	return 0;
}
