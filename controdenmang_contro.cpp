#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	unsigned int *contro= new unsigned int[20];
	int j=0,i;
	*contro=2;
	while(j<4){
		for(i=0; i<5; i++){
			cout<<setw(3)<<*contro;
			*(contro)+=2;
		}
		cout<<endl;
		j++;
	}
	delete []contro;
	return 0;
}
