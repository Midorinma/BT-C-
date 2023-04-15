#include<iostream>
using namespace std;
int main(){
	int D,N,G;
	for( int D=4; D<=12; D+=4){
		N=(100-D*7)/4;
		G=100-N-D;
		cout<<"So trau Dung: "<<D<<endl;
		cout<<"So trau Nam: "<<N<<endl;
		cout<<"So trau Gia: "<<G<<endl;
		cout<<"------------------------\n";
	}
	return 0;
}
