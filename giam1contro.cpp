#include<iostream>
#define MAX 3
using namespace std;
int main(){
	int a[MAX]={10,100,200};
	int *contro;
	contro=&a[MAX-1];
	for( int i=MAX; i>0; i--){
		//dia chi cua con tro la
		cout<<contro<<endl;
		//gia tri cua con tro  la
		cout<<*contro<<endl;
		contro--;
		*(contro-1)=25;//gan mang [1] gia tri 25
	}
	return 0;
}
