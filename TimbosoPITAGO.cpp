#include<iostream>
using namespace std;
int main(){
	int x,y,z,a,b,n;
	do{
		cout<<"Nhap n =";
		cin>>n;
	}while(n<0);
	for( a=2; a*a<n;a++){
		for( b=a-1; b*b<n;b++){
			y=2*a*b;
			x=(a*a-b*b);
			z=(a*a+b*b);
			if(x<y && x<z && y<z && z<=n){
				if(x*x+y*y==z*z){
				cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
			}
			
			}
		a++;
		}
			
	}
}
