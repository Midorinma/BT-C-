#include<iostream>
using namespace std;
int main(void){
	char A,truoc,sau;
	cout<<"Nhap vao mot ki tu :\n";
	cin>>A;
	truoc=A+1;
	sau=A-1;
	cout<<"Ma ASCII tuong ung :"<<" "<<int(A)<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Ki tu dung truoc la :"<<" "<<truoc<<endl;
	cout<<"Ma ASCII tuong ung :"<<" "<<int(A)+1<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Ki tu dung sau la :"<<" "<<sau<<endl;
	cout<<"Ma ASCII tuong ung :"<<" "<<int(A)-1<<endl;
}
