#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j;
	for(i=33; i<=255;i++){
		cout<<setw(3)<<i<<"-> "<<(char)i;
		cout<<endl;
	}

}
