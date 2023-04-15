#include<iostream>
#include<string.h>
using namespace std;
bool Isnumber(char s[], int n){
	if(n==0) return false;
	if(s[0]=='0')return false;
	for(int i=0;i<n; i++){
		if(s[i]<'0' || s[i]>'9')return false;
	}
	return true;
}
int main() {
	char s[100];
	gets(s);
	int n=strlen(s);
	if(Isnumber(s,n)==false){
		cout<<"Ban nhap sai dinh dang.";
		return 0;
	}
	for(int i=0; i<n ; i++){
		if(s[i]=='0' || s[i]=='5'){
			continue;
		}
		cout<<s[i];
	}
}
