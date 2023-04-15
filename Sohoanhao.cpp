#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int N,x,i;
	cout<<"Nhap mot so nguyen duong :\n";
	cin>>N;
	x=0;
	for(i=1; i<N; i++){
		if((N%i)==0){
			x+=i;
		}
	}
	if(x==N){
				cout<<N<<" "<<"La so hoan hao.";
			}
			else{
				cout<<N<<" "<<"Khong phai la so hoan hao.";
			}
			
	return 0;
	}


