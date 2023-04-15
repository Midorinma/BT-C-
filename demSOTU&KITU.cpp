#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
int main(){
	int n=0;
	string string;
	cout<<"Nhap vao mot cau : ";
	getline(cin,string);
	for( int i=0; i<string.size(); i++ ){
		if(isspace(string[i]))n+=1;
	}
	cout<<"So ki tu :"<<string.size()-n<<" "<<"ki tu"<<endl;
	cout<<"So tu :"<<n+1;
}

