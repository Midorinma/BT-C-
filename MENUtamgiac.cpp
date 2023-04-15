#include<iostream>
using namespace std;
void TGthuong(int h){
	for(int i=1 ; i<=h; i++){
 		for(int j=1; j<=i; j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
}
void TGthuongNG(int h){
	for(int i=h ; i>0; i--){
 		for(int j=i;j>0 ;j--){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
}
void TGcan(int h){
	int Dem=0;
 	while(h>0){
 		for(int i=1; i<=h; i++)
 			cout<<" ";
		for(int j=0; j<=Dem; j++)
			cout<<"*";
			cout<<endl;
			
 		h--;
 		Dem+=2;
	 }
}
void TGcanNG(int h){
	int Dem=0;
		if(h%2==0){
		h++;
		}
	cout<<endl;
	while(h>0){
		for(int i=0; i<=Dem; i++)
			cout<<" ";
		for(int j=h; j>0; j--)
			cout<<"*";
		cout<<endl;
		cout<<endl;
		Dem++;
		h-=2;
		
	}
}
void TGrong(int h){
		--h;
	for(int i=0; i<h; i++){
		for(int j=0; j<2*h+1; j++){
			if(j==h-i || j==h+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int j=0; j<2*h+1; j++){
		cout<<"*";
	}
}
void TGrongNG(int h){
	for(int j=0; j<2*h-1; j++){
		cout<<"*";
	}
	cout<<endl;
	h--;
	for( int i=h-1; i>=0; i-- ){
		for(int j=0; j<2*h+1;j++){
			if(j==h-i || j==h+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
 int main(){
 	int h;
 	cout<<"Nhap chieu cao tam giac:";cin>>h;
 	int sh;
	 do{
	 	system("cls");//lenh xoa man hinh
	 	cout<<"\t\tCHUONG TRINH XUAT RA TAM GIAC"<<endl;
	 	cout<<"---------------------------MENU----------------------------"<<endl;
	 	cout<<"1. Tam giac thuong.\n";
	 	cout<<"2. Tam giac thuong nguoc.\n";
	 	cout<<"3. Tam giac can.\n";
	 	cout<<"4. Tam giac can nguoc.\n";
	 	cout<<"5. Tam giac rong.\n";
	 	cout<<"6. Tam giac rong nguoc.\n";
	 	cout<<"7. EXIT.\n";
	 	cout<<"Ban chon? :\n";
	 	cin>>sh;
	 	switch(sh){
	 		case 1:cout<<"Tam giac thuong:\n";TGthuong(h);
	 		system("pause");
	 		break;
	 		case 2:cout<<"Tam giac thuong nguoc:\n";TGthuongNG(h);
	 		system("pause");
	 		break;
	 		case 3:cout<<"Tam giac can:\n";TGcan(h);
	 		system("pause");
	 		break;
	 		case 4:cout<<"Tam giac can nguoc:\n";TGcanNG(h);
	 		system("pause");
	 		break;
	 		case 5:cout<<"Tam giac rong:\n";TGrong(h);
	 		system("pause");
	 		break;
	 		case 6:cout<<"Tam giac rong nguoc:\n";TGrongNG(h);
	 		system("pause");
	 		break;
	 		case 7: return 0;
			 break;
	 		default:cout<<"Nhap sai!";
		 }
	 }while(sh);
 }
