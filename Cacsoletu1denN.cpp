#include <iostream> 
#include<iomanip>
using namespace std; 
int main () 
{
	int i,N;
	cout<<"Nhap mot so nguyen :";cin>>N;
	for( int i=1; i<=N; i++ ){	
		if((i%2)>0){
			cout<<setw(3)<<i;
		}
	}
	return 0;
}
  
