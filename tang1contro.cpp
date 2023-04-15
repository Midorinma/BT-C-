#include<iostream>
using namespace std;
#define max 3
int main(){
	int mang[max]={25,45,100};
	int *contro;
	contro=mang;
	for(int i=0; i<max; i++){
		cout<<"dia chi cua con tro ["<<i<<"]= ";
		cout<<contro<<endl;
		cout<<"Gia tri cua con tro ["<<i<<"]= ";
		cout<<*contro<<endl;
		*(contro+2)=150;
		contro++;
	}
	return 0;
}
