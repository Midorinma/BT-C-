#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,tram,chuc,dv;
	
	
	for(i=100;i<=999;i++){
	tram=i/100;
	chuc=(i%100)/10;
	dv=i%10;
	
		if(tram+dv==chuc*2){
			cout<<tram<<chuc<<dv<<endl;
		}
		
	}
	
	
}
