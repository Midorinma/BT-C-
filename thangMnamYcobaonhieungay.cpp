#include<iostream>
using namespace std;
int main(){
	int m,n;
	int nghin,tram,chuc,dv,duonglich,tronchan;
	cout<<"Nhap thang : ";cin>>m;
	cout<<"Nhap nam : ";cin>>n;
	switch(m){
		case 1:cout<<"thang "<<m<<" co  toi da 31 ngay.\n";
		break;
		case 2:cout<<"thang "<<m<<" co toi da 28 ngay.\n";
		break;
		case 3:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
		case 4:cout<<"thang "<<m<<" co toi da 30 ngay.\n";
		break;
		case 5:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
		case 6:cout<<"thang "<<m<<" co toi da 30 ngay.\n";
		break;
		case 7:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
		case 8:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
		case 9:cout<<"thang "<<m<<" co toi da 30 ngay.\n";
		break;
		case 10:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
		case 11:cout<<"thang "<<m<<" co toi da 30 ngay.\n";
		break;
		case 12:cout<<"thang "<<m<<" co toi da 31 ngay.\n";
		break;
	}
	nghin=n/1000;
	n-=(nghin*1000);
	tram=n/100;
	n-=(tram*100);
	chuc=n/10;
	dv=n-(chuc*10);
	duonglich=nghin*1000+tram*100+chuc*10+dv;
	tronchan=nghin*1000+tram*100;
	while(dv==0 && chuc==0){
	if(tronchan%400==0){
		cout<<tronchan<<"la nam tron chan"<<endl;
		cout<<tronchan<<" "<<"la nam nhuan co 366 ngay"<<endl;
	}
	else{
		cout<<tronchan<<"la nam tron chan"<<endl;
		cout<<tronchan<<" "<<"khong phai la nam nhuan co 365 ngay"<<endl;	
	}
	return 0;
	}	
	if(duonglich%4==0){
		cout<<duonglich<<" "<<"la nam nhuan co 366 ngay"<<endl;
	}
	else{
		cout<<duonglich<<" "<<"khong phai la nam nhuan co 365 ngay"<<endl;
	}
}
