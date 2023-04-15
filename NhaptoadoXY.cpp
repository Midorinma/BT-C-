#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x,y;
	do{
		cout<<"Nhap toa do x: ";cin>>x;
		cout<<"Nhap toa do y: ";cin>>y;
		if(x>10 || x<=0 || y>10 || y<=0){
			cout<<"Nhap sai! can nhap x,y<10 va x,y>0 : ";
		}
	}while(x>10 || x<=0 || y>10 || y<=0);
	for(int i=1; i<=10; i++){
		cout<<setw(3)<<i;
	}
	cout<<endl;
	int Dem=1;
	while(Dem<=10){
		for(int i=1; i<=10; i++){
			cout<<Dem;
			for(int j=1; j<=10; j++){
				if( y==i && x==j ){
					cout<<setw(2)<<"*";
				}
				if(y==i){
					cout<<setw(3)<<".";
				}
				else{
					cout<<setw(3)<<" ";
				}
			}
			cout<<endl;
			Dem++;
		}
		
	}
	
	
}
