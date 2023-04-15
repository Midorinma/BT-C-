#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int i,j,n;
	cout <<"Nhap chieu cao cua tam giac: ";
	cin >> n;
--n;
	for (i=0; i<n; i++) 
	{ 
	    for (j=0; j<2*n+1; j++) 
		{ 
	        if (j==n-i || j==n+i) 
			{ 
	            cout <<" * ";
	        }
	        else  
			{
	            cout <<"   ";
	        }
	    }
	    cout << endl;
	}
	for (j=0; j<2*n+1; j++) 
	{
	    cout <<" * ";
	}
	
	return 0;
}
