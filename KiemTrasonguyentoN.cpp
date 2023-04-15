#include<iostream>
using namespace std;
bool KTsonguyento(int n){
	int Dem=0;
	for( int i=1; i<n; i++ ){
		if(n%i==0){
			Dem+=1;
		}
	}
	if(Dem==1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cout<<"N = ";
	cin>>n;
	if(KTsonguyento(n)==true){
		cout<<n<<" La so nguyen to.";
	}
	else{
		cout<<n<<" Khong phai la so nguyen to.";
	}
}
