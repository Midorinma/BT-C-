#include<iostream>
#include<math.h>
using namespace std;
int KTSNT(int n){
	if(n<2){
		return 0;
	}
	else{
		if(n%2==0){
			return 0;
		}
		for(int i=3; i<=sqrt(float(n)); i+=2){
			if(n%i==0){
				return 0;
				break;
			}
		}
	}
	return 1;
}
int DemSNT(int n){
	int Dem=0,i,j;
	if(KTSNT(n)==1){
		for(i=2; i<=n; i++){
		for(j=2; j<=sqrt(float(i)); j++)
			if(!(i%j))break;
			if(j>(i/j))Dem++;
		
		}
	}
	else{
		cout<<n<<" Khong phai la so nguyen to.";
		return 0;
	}
	
	cout<<n<<" La so nguyen to thu "<<Dem;
}
int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	DemSNT(n);

}
