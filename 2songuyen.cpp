#include<iostream>
using namespace std;
int main(){
	int x,y,p,s,q;
	cout<<"Nhap hai so nguyen x&y :";cin>>x>>y;
	p=x*y;
	s=x+y;
	q=s*s+p*(s-x)*(p+y);
	cout<<"Gia tri cua p:"<<p<<endl;
	cout<<"Gia tri cua s:"<<s<<endl;
	cout<<"Gia tri cua q:"<<q<<endl;
	return 0;
}
