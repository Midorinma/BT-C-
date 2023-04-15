#include<iostream>
using namespace std;
bool KTtongtich(int n){
	int tram,chuc,dv;
	for(int i=n; n!=0; n/=10){
		tram=n/100;
		chuc=(n%100)/10;
		dv=n%10;
		if(tram+chuc+dv==tram*chuc*dv){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	cout<<"Nhap mot so n gom 3 chu so: ";cin>>n;
	while(n<100){
		cout<<"Khong thoa n!\n";
		cout<<"Nhap mot so n gom 3 chu so: ";cin>>n;
	}
	if(KTtongtich(n)==true){
		cout<<n<<" Thoa tinh chat cua P.";
	}
	else{
		cout<<n<<" Khong thoa tinh chat cua P.";
	}

}
