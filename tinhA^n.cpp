#include<iostream>
#include<math.h>
using namespace std;
int Somu( float a , int n){
	
	return pow(a,n);
}
int nhan( float a, int n ){
	int x=1;
	for( int i=1; i<=n-1; i++ ){
		x*=(a+i);
	}
	return a*x;
}
int Phanso(float a , int n){
	float x,y,sum=0,t=1;
	for(int i=1; i<=n;i++){
		 x=1/a;
		y=1/(a+i);
		t*=x*y;
		sum+=t;
	}
	cout<<(x+sum);
}
int main(){
	float a;
	int n;
	cout<<"Nhap so thuc a: ";cin>>a;
	cout<<"Nhap so mu n: ";cin>>n;
	cout<<"-------------------\n";
	cout<<a<<"^"<<n<<" "<<"Co dang: ";
	cout<<Somu(a,n)<<endl;
	cout<<endl;
	cout<<a<<'*'<<"("<<a<<'+'<<n<<"- 1 ) co dang : ";
	cout<<nhan(a,n)<<endl;
	cout<<endl;
	cout<<"1/"<<a<<'+'<<"1/"<<a<<'*'<<"("<<a<<'+'<<n<<"co dang:";
	cout<<Phanso(a,n)<<endl;
	
	 
}
