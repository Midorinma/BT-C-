#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	int x=1,y=1;
	cout<<"Nhap n = ";
	cin>>n;
		if(n%2==0){
			for(i=1; i<=n ;i++){
				if(i%2==0){
					for(j=1;j<=i;j++){
						y*=j;
					}
				}
			}
			cout<<"N la so chan: "<<y;	
		}
		else{
			for(i=1; i<=n ;i++){
				if(i%2!=0){
					for(j=1;j<=i;j++){
						y*=j;
					}
				}
			}
			cout<<"N la so le: "<<y;
		}
	
}
