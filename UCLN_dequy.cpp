#include<iostream>
using namespace std;
int UCLN(int n, int m)
{
    if (n * m == 0)
        return n + m;
    if (n > m)
        return UCLN(n - m, m);
    else
        return UCLN(n, m - n);
}
int main(){
	int n,m;
	cout<<"n= ";cin>>n;
	cout<<"m= ";cin>>m;
	cout<<UCLN(n,m);
}
