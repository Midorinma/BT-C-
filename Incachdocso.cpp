#include<iostream>
using namespace std;
int main(){
	int n,trnghin,chucnghin,nghin,tram,chuc,dv;
	cout<<"Nhap mot so nguyen duong <1000000\n:"<<endl;
	cin>>n;
	trnghin=n/100000;
	n-=(trnghin*100000);
	chucnghin=n/10000;
	n-=(chucnghin*10000);
	nghin=n/1000;
	n-=(nghin*1000);
	tram=n/100;
	n-=(tram*100);
	chuc=n/10;
	n-=(chuc*10);
	dv=n*1;
	switch(trnghin)
	{
		case 9: cout<<" "<<"chin tram";break;
		case 8: cout<<" "<<"tam tram";break;
		case 7: cout<<" "<<"bay tram";break;
		case 6: cout<<" "<<"sau tram";break;
		case 5: cout<<" "<<"nam tram";break;
		case 4: cout<<" "<<"bon tram";break;
		case 3: cout<<" "<<"ba tram";break;
		case 2: cout<<" "<<"hai tram";break;
		case 1: cout<<" "<<"mot tram";break;
		
	}
	switch(chucnghin)
	{
		case 9: cout<<" "<<"chin muoi";break;
		case 8: cout<<" "<<"tam muoi";break;
		case 7: cout<<" "<<"bay muoi";break;
		case 6: cout<<" "<<"sau muoi";break;
		case 5: cout<<" "<<"nam muoi";break;
		case 4: cout<<" "<<"bon muoi";break;
		case 3: cout<<" "<<"ba muoi";break;
		case 2: cout<<" "<<"hai muoi";break;
		case 1: cout<<" "<<" muoi";break;
	}
		switch(nghin)
	{
		case 9: cout<<" "<<"chin nghin";break;
		case 8: cout<<" "<<"tam nghin";break;
		case 7: cout<<" "<<"bay nghin";break;
		case 6: cout<<" "<<"sau nghin";break;
		case 5: cout<<" "<<"nam nghin";break;
		case 4: cout<<" "<<"bon nghin";break;
		case 3: cout<<" "<<"ba nghin";break;
		case 2: cout<<" "<<"hai nghin";break;
		case 1: cout<<" "<<"mot nghin";break;
	}
			switch(tram)
	{
		case 9: cout<<" "<<"chin tram";break;
		case 8: cout<<" "<<"tam tram";break;
		case 7: cout<<" "<<"bay tram";break;
		case 6: cout<<" "<<"sau tram";break;
		case 5: cout<<" "<<"nam tram";break;
		case 4: cout<<" "<<"bon tram";break;
		case 3: cout<<" "<<"ba tram";break;
		case 2: cout<<" "<<"hai tram";break;
		case 1: cout<<" "<<"mot tram";break;
	}
			switch(chuc)
	{
		case 9: cout<<" "<<"chin muoi";break;
		case 8: cout<<" "<<"tam muoi";break;
		case 7: cout<<" "<<"bay muoi";break;
		case 6: cout<<" "<<"sau muoi";break;
		case 5: cout<<" "<<"nam muoi";break;
		case 4: cout<<" "<<"bon muoi";break;
		case 3: cout<<" "<<"ba muoi";break;
		case 2: cout<<" "<<"hai muoi";break;
		case 1: cout<<" "<<"muoi";break;
	}
			switch(dv)
	{
		case 9: cout<<" "<<" chin";break;
		case 8: cout<<" "<<" tam";break;
		case 7: cout<<" "<<" bay";break;
		case 6: cout<<" "<<" sau";break;
		case 5: cout<<" "<<" nam";break;
		case 4: cout<<" "<<" bon";break;
		case 3: cout<<" "<<" ba";break;
		case 2: cout<<" "<<" hai";break;
		case 1: cout<<" "<<" mot";break;
		
	}
	return 0;
}
