#include<iostream>
#define MAX 100
using namespace std;
char KT(char *kt){
	while(*kt !='\0'){
		for(int i=65; i<=90; i++){
		for(int j=97; j<=122; j++){
			if(*kt==(char)i){
			*kt=(char)j;
			}
			i++;
			}
		}
		kt++;
	}
}
char nacdanh(char n[], char &pkt){
	KT(n);
	cout<<n;
}
int main(){
	char *charPtr;
	char n[MAX];
	gets(n);
	nacdanh(n,*charPtr);
	return 0;
}
