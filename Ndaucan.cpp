#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
int a=2;
float sum=0;
cout<<"Nhap n = ";
cin>>n;
for(int i=1; i<=n;i++){
	sum=sqrt(sum+a);
}
cout<<sum;
return 0;
}
