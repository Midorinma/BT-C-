#include<iostream>
using namespace std;
int Count(int n){
	int Dem=0;
	while(n>0){
		n=n/10;
		Dem+=1;
	}
	return Dem;
}
int main(){
	int n,nghin,tram,chuc,dv,tich;
	cout<<"Nhap vao n: ";
	cin>>n;
	cout<<"---------------------------------\n";
	cout<<n<<" co "<<Count(n)<<" chu so."<<endl;
	nghin=n/1000;
	n-=(nghin*1000);
	tram=n/100;
	n-=(tram*100);
	chuc=n/10;
	dv=n%10;
	cout<<"Tong cac chu so cua n: "<<nghin+tram+chuc+dv<<endl;
	cout<<"-----------------------------------\n";
	if(nghin==0 && tram==0){
		cout<<"Tich cac chu so n: "<<chuc*dv<<endl;
	}
	else if(nghin==0 && tram!=0){
		cout<<"Tich cac chu so n: "<<tram*chuc*dv<<endl;
	}
	else if(nghin==0 && tram==0 && chuc==0){
			cout<<"Tich cac chu so n: "<<dv<<endl;
	}
	else{
		cout<<"Tich cac chu so n: "<<nghin*tram*chuc*dv<<endl;
	}
	cout<<"-----------------------------------\n";
	if(nghin==0 && tram==0){
		cout<<"chu so dau tien: "<<chuc<<endl;
	}
	else if(nghin==0 && tram!=0){
		cout<<"Chu so dau tien "<<tram<<endl;
	}
	else if(nghin==0 && tram==0 && chuc==0){
			cout<<"chu so dau tien : "<<dv<<endl;
	}
	else{
		cout<<"chu so dau tien: "<<nghin<<endl;
	}
	

}
