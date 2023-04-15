#include<iostream>
using namespace std;
const int MAX=3;
int main(){
	int a[MAX];
	int *c;
	int sum=0;	
	for(int i=0; i<MAX; i++){
		cin>>a[i];
	}
	c=a;
	for(int i=0; i<MAX; i++){
		sum+=*c;
		c++;
	}
	cout<<sum;
}
