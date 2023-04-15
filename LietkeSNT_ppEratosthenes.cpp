#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Nhap n>0 : ";
		cin>>n;
		if(n<0){
			cout<<"Nhap sai! Nhap lai n>0\n";
		}
	}while(n<0);
	bool Kt[n];
	for(int i=2; i<=n; i++){
		Kt[i]=true;
	}
	for(int i=2; i<=n; i++){
		if(Kt[i]==true){
			for(int j=2*i; j<=n; j+=i){
				Kt[j]=false;
			}
		}
	}
	cout<<"Cac SNT<n bang phuong phap sang Eratosthenes: "<<endl;
	for(int i=2; i<=n; i++){
		if(Kt[i]==true){
			cout<<setw(3)<<i;
		}
	}
}




