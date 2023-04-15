#include<iostream>
using namespace std;
bool KTnamnhuan(int nam){
	if(nam%400==0){
		return true;
	}
	else if( nam%4==0 && nam%100!=0){
		return true;
	}
	return false;
}
int Demngaytrongthang(int thang, int nam){
	int MAX;
	switch(thang){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			MAX=31;
			break;
		case 2:
			if(KTnamnhuan(nam)==true){
				MAX=29;
				break;
			}
			if(KTnamnhuan(nam)==false){
				MAX=28;
			}
		case 4:case 6:case 9:case 11:
			MAX=30;
			break;
	}
	return MAX;
}
bool KTngaythangnam(int ngay, int thang, int nam){
	if(ngay>0 && ngay<=Demngaytrongthang(thang,nam)){
		return true;
	}
	return false;
}
int KTngaytieptheo(int ngay, int thang, int nam){
	int d,m,y;
	d=ngay;
	m=thang;
	y=nam;
	d=ngay+1;
	if(thang!=12 && ngay==Demngaytrongthang(thang,nam)){
		d=1;
		m=thang+1;
		y=nam;
		
	}
	if(thang==12 && ngay==Demngaytrongthang(thang,nam)){
		d=1;
		m=1;
		y=nam+1;
	}
	if(thang==2 && KTnamnhuan(nam)==true){
		if(ngay==29){
			d=1;
			m=thang+1;
		}
	}
	if(thang==2 && KTnamnhuan(nam)==false){
			if(ngay==28){
				d=1;
				m=thang+1;
			}
		}
		cout<<"Ngay tiep theo: "<<d<<" "<<m<<" "<<y;
}
int Nngaytieptheo(int &ngay, int &thang, int &nam, int N){
	int nd=0,nm,ny;

	nd+=ngay+N+1;
	nm=thang;
	ny=nam;
	if(thang!=12 && nd>Demngaytrongthang(thang,nam)){
		while(nd>Demngaytrongthang(thang,nam)){
			nd-=Demngaytrongthang(thang,nam);
			nm=thang+1;
		}	
	}
	if(thang==12 && nd>Demngaytrongthang(thang,nam)){
		while(nd>Demngaytrongthang(thang,nam)){
			nd-=Demngaytrongthang(thang,nam);
			ny=nam+1;
			nm=1;
			
		}	
	}
	if(thang==2 && KTnamnhuan(nam)==true && nd>Demngaytrongthang(thang,nam)){
			nd-=29;
			++nm;
			}
	if(thang==2 && KTnamnhuan(nam)==false && nd>Demngaytrongthang(thang,nam)){
			while(nd>Demngaytrongthang(thang,nam)){
			nd-=28;
			nm+=1;
			}
	}
	cout<<"N ngay ke tiep la "<<nd<<" "<<nm<<" "<<ny;
}
int main(){
	int ngay,thang,nam;
	cout<<"Nhap ngay: ";cin>>ngay;
	cout<<"Nhap thang: ";cin>>thang;
	cout<<"Nhap nam: ";cin>>nam;

	if(KTngaythangnam(ngay,thang,nam)==true){
		cout<<"Ngay thang nam vua nhap hop le."<<endl;
	}
	if(KTngaythangnam(ngay,thang,nam)==false){
		cout<<"Ngay thang nam vua nhap khong hop le."<<endl;
		return 0;
	}
	KTngaytieptheo(ngay,thang,nam);
	
	cout<<endl;
	int N;	
	do{
		cout<<"Nhap N:";cin>>N;
		if(N>=29){
			cout<<"can nhap N<32, de chay chuong trinh.";
		}
	}while(N>=29);
	Nngaytieptheo(ngay,thang,nam,N);
	
}
