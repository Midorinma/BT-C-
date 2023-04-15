#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void Khaibao(int **&contro, int dong, int cot){
	//khai bao vung nho  contro  me tro toi con tro con 
	contro=(int**)malloc(sizeof(int*)*dong);
	//khai bao vung nho contro con 
	for(int i=0; i<dong; i++){
		contro[i]=(int*)malloc(sizeof(int)*cot);
	}
}
void NhapMang(int **contro, int dong, int cot){
	for(int i=0; i<dong; i++){
		for(int j=0; j<cot; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>contro[i][j];
		}
	}
}
void XuatMang(int **contro, int dong,  int cot){
	for(int i=0; i<dong; i++){
		for(int j=0; j<cot; j++){
			cout<<setw(3)<<contro[i][j];
		}
		cout<<endl;
	}
}
void Giaiphong(int **contro, int dong){
	//giai phong cho nhung pt trong vung nho me
	for(int i=0; i<dong; i++){
		free(contro[i]);
	}
	//giai phong di chi tro den vung nho
	free(contro);
}
//--------------------Xoadong----------------------
int Xoadong(int **contro, int &dong, int cot, int sodong){//so dong thay doi nen can truyen tham chieu
	for(int i=sodong; i<dong-1; i++)
		for(int j=0; j<cot; j++){
			contro[i][j]=contro[i+1][j];
		}
		dong--;
}
//-------------------XoaCot----------------------
int XoaCot(int **contro, int dong, int &cot, int socot){//so cot thay doi nen can truyen tham chieu
	for(int i=0; i<dong; i++){
		for(int j=socot; j<cot-1; j++)
			contro[i][j]=contro[i][j+1];
	}
	cot--;
}
//-----------------ThemDong----------------------
void Themdong(int **&contro, int &dong, int cot, int *giatrithem, int vitrithem){
	int i,j;
	dong++;
	contro = (int**)realloc(contro, dong * sizeof(int));//cap phat vung nho cho con tro me
	contro[dong - 1] = new int[cot];//khoi tao vung nho cua cot tra ve dia chi dong
	for( i=dong-1; i>vitrithem; i-- ){
		for(j=0; j<cot; j++){
			contro[i][j]=contro[i-1][j];
		}
	}
	
		for(j=0; j<cot; j++){
		contro[vitrithem][j]=giatrithem[j];
		}		
}
//-------------------ThemCot------------------------
void ThemCot(int **&contro, int dong, int &cot, int *addcollum, int  location){
	
	cot++;
	for(int i=0; i<dong; i++){
		contro[i]=(int*)realloc(contro[i],cot*sizeof(int));//contro me cua dong tro  xuong con tro con theo tung dong 
	}//va cap phat bo nho
	for(int i=0; i<dong; i++){
		for(int j=cot-1; j>location; j--){
			contro[i][j]=contro[i][j-1];//dich chuyen cot
		}
	}
	for(int i=0; i<dong; i++){//gan vi tri them cot cho gia tri them
		contro[i][location]=addcollum[i];
	}
}
int main(){
	int dong, cot;
	int **contro;
	int sodong;
	int socot;
	cout<<"Nhap vao so dong: ";cin>>dong;
	cout<<"Nhap vao so cot: ";cin>>cot;
	
	Khaibao(contro, dong, cot);
	cout<<"Nhap mang: "<<endl;
	NhapMang(contro,  dong,  cot);
	cout<<"Xuat mang: "<<endl;
	XuatMang(contro, dong,  cot);
	//----------XoaDong-------------
	cout<<"\nNhap vao so dong can xoa: ";cin>>sodong;
	Xoadong(contro, dong, cot, sodong);
	XuatMang(contro, dong, cot);
	//-----------XoaCot--------------
	cout<<"\nNhap vao so cot can xoa: ";cin>>socot;
	XoaCot(contro,dong,cot,socot);
	XuatMang(contro, dong, cot);
	//-----------ThemDong-------------
	cout<<"Them dong.\n";
	int *giatrithem=new int[cot];
	int vitrithem;
	cout<<"Nhap vao vi tri them: ";cin>>vitrithem;
	for(int i = 0; i<cot; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 <<endl;
		cin >> giatrithem[i];
	}
	Themdong(contro,dong,cot,giatrithem,vitrithem);
	cout<<endl;
	cout << "Ma tran sau khi them dong:"<<endl;
	XuatMang(contro, dong,cot);
	//------------ThemCot---------------
	cout<<"Them cot.\n";
	int *addcollum=new int[dong];
	int location;
	cout<<"Nhap vao vi tri them: ";cin>>location;
	for(int i=0; i<dong;  i++){
		cin>>addcollum[i];
	}	
	ThemCot(contro,dong,cot,addcollum,location);
	cout<<endl;
	cout << "Ma tran sau khi them cot:"<<endl;
	XuatMang(contro, dong,cot);
	
	Giaiphong(contro,dong);
}
