#include<iostream>
using namespace std;
int KTnamnhuan(int y){
	return ((y%4==0 && y%100!=0)|| y%400==0);
}
int demsongaytrongthang(int m, int y){
	switch(m){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			{
				return 31;
			}
		case 2:
			if(KTnamnhuan(y)){
				return 29;
				
			}
			return 28;
			
			
		case 4:case 6:case 9:case 11:
			{
				return 30;
			}
	}
}
void KTngayhomtruoc(int d,int m,int y){
	int nd=d;
	int nm=m;
	int ny=y;
	if( y>0 && m>0 && m<=12 && d<=(demsongaytrongthang(m,y))){
		nd=d-1;
		if(m!=1 && d==1){
			if( m==2 || m==4 || m==6 || m==8 || m==9 || m==11 && d==1){
				nd=31;
				nm=m-1;
				ny=y;
			}
			if(m==5 || m==7 || m==10 || m==12 && d==1){
				nd=30;
				nm=m-1;
				ny=y;
			}
		  if(m==3){
			if(KTnamnhuan(y)){
				{
					nd=29;
					nm=m-1;
					ny=y;
				}
			}
				else{
					nd=28;
					nm=m-1;
					ny=y;
				}
		}
	}
		if(m==1 && d==1){
			nd=demsongaytrongthang(m,y);
			nm=12;
			ny=y-1;
		}
	
		
	}

	cout<<"Ngay hom truoc la : "<<nd<<" : "<<nm<<" : "<<ny<<endl;
}
int main(){
	int d,m,y;
	do{
		cout<<"Nhap vao ngay: ";
		cin>>d;
		cout<<"Nhap vao thang: ";
		cin>>m;
		cout<<"Nhap vao nam: ";
		cin>>y;
	}while(y<0 || m<0 || m>12 || d>31 || d<=0 );
	KTngayhomtruoc(d,m,y);
}
