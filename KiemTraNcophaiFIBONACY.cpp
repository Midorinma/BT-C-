#include<iostream>
using namespace std;
bool Fibonacy(int n){
	int a=0,b=1,i,x;
	for(i=0; i<n; i++){
		x=a+b;
		a=b;
		b=x;
		if(n==x){
		return true;
		break;
			}
	}
	
	if(n!=x){
		return false;
	}
}
int main(){
	int n;
	cout<<"Nhap vao so N: ";cin>>n;
	if(n<=0){
		cout<<"Can nhap n>0.";
	}
	else{
		if(Fibonacy(n)==true){
			cout<<n<<" La so Fibonaccy.";
		}
		if(Fibonacy(n)==false){
			cout<<n<<" Khong phai la so Fibonaccy.";
		}
	}
	return 0;
}
