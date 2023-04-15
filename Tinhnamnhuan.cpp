#include<iostream>
using namespace std;
int main(){
	int n,nghin,tram,chuc,dv,duonglich,tronchan;
	cout<<"Nhap nam y = ";cin>>n;
	
	nghin=n/1000;
	n-=(nghin*1000);
	tram=n/100;
	n-=(tram*100);
	chuc=n/10;
	dv=n-(chuc*10);
	duonglich=nghin*1000+tram*100+chuc*10+dv;
	tronchan=nghin*1000+tram*100;
	while(dv==0 && chuc==0){
	if((tronchan%400)==0){
		cout<<tronchan<<"la nam tron chan"<<endl;
		cout<<tronchan<<" "<<"la nam nhuan"<<endl;
	}
	else{
		cout<<tronchan<<"la nam tron chan"<<endl;
		cout<<tronchan<<" "<<"khong phai la nam nhuan"<<endl;	
	}
	return 0;
	}
	if((duonglich%4)==0){
		cout<<duonglich<<" "<<"la nam nhuan.";
	}
	else{
		cout<<duonglich<<" "<<"khong phai la nam nhuan";
	}

	
}
