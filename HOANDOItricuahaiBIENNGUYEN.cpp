#include<iostream>
using namespace std;
int main(){
	int n,m,tam;
	cout<<"Nhap vao mot bien n: ";cin>>n;
	cout<<"Nhap vao mot bien m: ";cin>>m;
	cout<<"-------------------------------\n";
	cout<<n<<" "<<m<<endl;
	tam=n;
	n=m;
	m=tam;
	cout<<"hai bien sau khi hoan doi la: "<<n<<" "<<m;
}
