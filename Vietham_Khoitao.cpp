#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#define MAX 100
using namespace std;
//-----------NHAPXUAT-----------
void NhapMang( int s[] , int n ){
	for( int i=0 ; i<n ; i++ ){
		cout<<"a["<<i<<"] = ";
		cin>>s[i];
	}
}
void XuatMang( int s[] , int n ){
	for(int i=0; i<n; i++){
		cout<<s[i]<<" ";
	}
}
//-------------KTmang--------------
// Kiem tra mang tang
bool Tang(int s[], int n) {
    int dem = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i + 1] >= s[i]) dem++;
    }
    if (dem == n - 1) return true;
    else return false;
}
//KT mang giam
bool Giam(int s[], int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		if(s[i]>=s[i+1]){
			dem++;
		}
	}
	if(dem==n-1){
		return true;
	}
	else{
		return false;
	}
}
//-------------XoayMang------------
void Daonguoc(int s[], int n){
	for(int i=n-1;i>=0; i--){
		cout<<setw(3)<<s[i];
	}
	cout<<endl;
}
void Xoaytrai(int s[], int &n, int d){
	while(d>0){
		int tam=s[0];
		for(int i=0; i<n; i++){
			s[i]=s[i+1];
		}
		s[n-1]=tam;
		d--;
	}
}
void Xoayphai( int s[] , int &n , int e){
	while(e>0){
		int tam=s[n-1];
		for(int i=n-1; i>=0; i--){
			s[i+1]=s[i];
		}
		s[0]=tam;
		e--;
	}
}
//-------------TimKiem-------------
/*int TimKiem(int s[], int n, int x){
	int left=0;
	int right=n-1;
	int mid;
	while(left<=right){
		mid=(left+right)/2;
		if(x==s[mid]){
			return mid;
		}
		if(x<s[mid]){
			right=mid-1;
		}
		if(x>s[mid]){
			left=mid+1;
		}
	}
	return -1;
}*/
int TimKiem(int s[], int n, int x){
	for(int i=0; i<n; i++){
		if(s[i]==x){
			return i;
		}
	}
	return -1;
}
//--------------SapXep--------------
int Swap(int &x, int &y){
	int temp;
		temp=x;
		x=y;
		y=temp;
}
void Sapxep(int s[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(s[i]>s[j]){
				Swap(s[i],s[j]);
			}
		}		
	}	
}
void LTCG(int s[], int &n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(s[j]%2==0){
				Swap(s[i],s[j]);
			}
		}		
	}	
}
int Giatri(int *GT,int n, int x){
	for(int i=0; i<n; i++){
		if(GT[i]==x){
			return i;
		}
	}
	return -1;
}
void Hienthi(int *GT, int *Dem, int n){
	int i;
	cout<<"Mang sau khi loai bo: "<<endl;
	for(i=0; i<n; i++){
		cout<<setw(3)<<GT[i];
	}
}
void Loaibo(int *s, int n){
	int Dem[MAX];
	int GT[MAX];
	int Size=0;
	for(int i=0; i<n; i++){
		Dem[i]=0;
	}
	for(int i=0; i<n; i++){
		int phu=Giatri(GT,Size,s[i]);
		if(phu==-1){
			GT[Size]=s[i];
			Dem[Size]=1;
			Size++;
		}else{
			Dem[phu]++;
			continue;
			n--;
		}
	}
	Hienthi(GT,Dem,Size);
}
//--------------DemDayCon-----------
int KTmangphu(int phu[], int nphu){
	for( int i=0; i<nphu-1; i++){
		if( phu[i] > phu[i+1] ){
			return 0;
		}
	}
	return 1;
}
int show(int phu[], int nphu){
	for(int i=0; i<nphu; i++){
		cout<<setw(3)<<phu[i];
	}
	cout<<endl;
}
int Demdaycontang(int s[], int n){
	int phu[MAX],nphu,Dem=0;
	int daycontang,i,j;
	for( i=0; i<n; i++ ){
		for( daycontang=2+i; daycontang<=n; daycontang++ ){
			nphu=0;
			for( j=i; j<daycontang; j++ ){
				phu[nphu]=s[j];
				nphu++;
			}
			if(KTmangphu(phu,nphu)==1){
				show(phu,nphu);
				Dem++;
			}
		}
	}
	cout<<endl;
		cout<<"So day con tang dan trong mang: "<<Dem;	
}
int Tong( int tong[], int ntong){
	int Sum=0;
	for(int i=0; i<ntong; i++){
		Sum+=tong[i];
	}
	return Sum;
}
int Tongphantu(int s[], int n){
	int tong[MAX],ntong;
	int i,tongpt,z;
	for( i=0; i<n; i++){
		for( tongpt=2+i; tongpt<=n; tongpt++ ){
			ntong=0;
			for(z=i; z<tongpt; z++){
				tong[ntong]=s[z];
				ntong++;
			}
			if(KTmangphu(tong,ntong)==1){
				show(tong,ntong);
				cout<<endl;
				cout<<"Tong phan tu: "<<Tong(tong,ntong)<<endl;
			}
		}
	}
}
//-------------XoaMang-------------
int XoaMang(int s[], int &n, int y){
	if(y>=n){
		y=n-1;
	}
	if(y<=0){
		y=0;
	}
	for(int i=y; i<n-1; i++){
		s[i]=s[i+1];
	}
	n--;
}
int XoaALL(int s[], int &n){
	int i=0;
		s[i]=0;
		n=0;
}
//------------random---------------
void random_increase(int s[],int &n){
	srand((int)time(0));
	int i=0;
	s[i]=rand()%10+1;
	for(i=1; i<n; i++){
		s[i]=s[i-1]+rand()%10+1;
	}
	for(i=0; i<n; i++){
		cout<<setw(3)<<s[i];
	}
}
int random(int min, int max){
	return min+rand()%(max-min+1);
}
int KQ(int a, int b){
	int r;
	srand(time(NULL));
	for(int i=a; i<=b; i++){
		r=random(a,b);
		cout<<setw(3)<<r;
	}
}
int main(){
	int s[MAX];
	int n;
	int nhap,a,b;
	int d,e,x,y;
	do{
		cout<<"Nhap n: ";cin>>n;
		if(n<0 || n>MAX){
			cout<<"Nhap sai! Can nhap lai gia tri N (0<N<100): ";
		}
	}while(n<0 || n>MAX);
	NhapMang(s,n);
	cout<<endl;
	do{
		system("cls");
		cout<<endl;
		cout<<"---------------------------MENU------------------------------\n";
		cout<<"\t+ Khoi tao gia tri ngau nhien cho cac phan tu cua mang: "<<endl;
		cout<<"1. moi phan tu co tri trong doan [a..b]"<<endl;
		cout<<"2. sao cho mang co thu tu tang dan."<<endl;
		cout<<"\t+ kiem tra thu tu cua mang: "<<endl;
		cout<<"3. mang tang? "<<endl;
		cout<<"4. mang giam? "<<endl;
		cout<<"\t+ Xoay mang: "<<endl;
		cout<<"5. Dao nguoc thu tu cac phan tu trong mang."<<endl;
		cout<<"6. rotate left cac phan tu trong mang k>0 lan."<<endl;
		cout<<"7. rotate right cac phan tu trong mang k>0 lan."<<endl;
		cout<<"+ Tim kiem:"<<endl;
		cout<<"8. seach gia tri x trong mang."<<endl;
		cout<<"\t+ Xoa mang: "<<endl;
		cout<<"9. Delete phan tu dau tien trong mang."<<endl;
		cout<<"10. Delete all phan tu trong mang."<<endl;
		cout<<"\t+ Sap xep: "<<endl;
		cout<<"11. theo thu tu tang dan."<<endl;
		cout<<"12. theo thu tu le tang chan giam."<<endl;
		cout<<"13. Tang dan va delete cac phan tu trung nhau"<<endl;
		cout<<"\t+ Day con: "<<endl;
		cout<<"14. Dem va xuat day con ra man hinh moi day tren 1 dong."<<endl;
		cout<<"15. Xuat day con tang dan co so luong phan tu nhieu nhat."<<endl;
		cout<<"16. Xuat day con tang dan co tong cac phan tu lon nhat."<<endl;
		cout<<"Xuat Mang: ";
		XuatMang(s,n);
		cout<<endl;
		cout<<"Ban chon? "<<endl;
		cin>>nhap;
		switch(nhap){
			case 1:
			cout<<"Nhap a: "<<endl; cin>>a;
			if(a<0){
				break;
			}
			cout<<"Nhap b: "<<endl; cin>>b;
			if(b<a){
				break;
			}
			KQ(a,b);cout<<endl;
			system("pause");
			break;
			case 2:
				cout<<"Nhap: ";cin>>n;
				random_increase(s,n);cout<<endl;
				system("pause");
				break;
			case 3:
			if(Tang(s,n)==true){
				cout<<"Mang tang dan.";
			}
			if(Tang(s,n)==false){
				cout<<"Mang khong theo thu tu.";
			}
			cout<<endl;
			system("pause");
			break;
			case 4:
			if(Giam(s,n)==true){
				cout<<"Mang giam dan.";
			}
			if(Giam(s,n)==false){
				cout<<"Mang khong theo thu tu.";
			}
			cout<<endl;
			system("pause");
			break;
			case 5:	Daonguoc(s,n);
			system("pause");
			break;
			case 6: cout<<"Nhap k>0: ";cin>>d;
			Xoaytrai(s,n,d);
			cout<<"Mang sau khi xoay trai: ";
			XuatMang(s,n);cout<<endl;
			system("pause");
			break;	
			case 7: cout<<"Nhap k>0: ";cin>>e;
			Xoayphai(s,n,e);
			cout<<"Mang sau khi xoay phai: ";
			XuatMang(s,n);cout<<endl;
			system("pause");
			break;
			case 8:cout<<"nhap gia tri can tim: ";cin>>x;
			cout<<"Tim thay "<<x<<" tai vi tri "<<TimKiem(s, n,x)<<endl;
			system("pause");
			break;
			case 9:cout<<"Nhap vao gia tri can xoa: ";cin>>y;
			XoaMang(s,n,y);
			cout<<"Mang sau khi xoa: ";XuatMang(s,n);
			cout<<endl;
			system("pause");
			break;
			case 10:XoaALL(s,n);
			cout<<"Xoa all: ";
			XuatMang(s,n);
			system("pause");
			break;
			case 11:
			Sapxep(s,n);
			cout<<"Mang tang dan: ";
			XuatMang(s,n);
			cout<<endl;
			system("pause");
			break;
			case 12:
				LTCG(s,n);
				cout<<"Le tang chan giam: ";
				XuatMang(s,n);
				system("pause");
				break;
			case 13:Loaibo(s,n);
				cout<<endl;
				system("pause");
				break;
			case 14:
					Demdaycontang(s,n);
					cout<<endl;
					system("pause");
					break;
			/*case 15:
					
					cout<<endl;
					system("pause");
					break;*/
			case 16:
					Tongphantu(s,n);
					cout<<endl;
					system("pause");
					break;
		}
	}while(nhap);
	
	
	
}
