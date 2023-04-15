#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	long long a,b,x,n,i;
	a=0;
	b=1;
	cout << "Nhap n: ";
	cin>>n;
	
	cout << n << " phan tu dau tien cua day Fibonacci la: " << endl;
	cout << endl;
	if(n==1){
		cout << a << endl;
	
	}
	if(n==2){
	cout << a << endl;
	cout << b << endl;
		
	}
		if(n>2){
			cout << a << endl;
			cout << b << endl;
		for(i=1;i<=n-2;i++)
		{
			x=a+b;
			cout << x << endl;
			a=b;
			b=x;
		}
		}
	return 0;
}
