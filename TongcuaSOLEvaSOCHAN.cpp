#include "iostream"
using namespace std;
 
int main(void) {
	int a,b;
    do
	{
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
        if (a==b)
		{ 
            cout << "Nhap lai a: ";
    		cout << "Nhap lai b: ";
        }
    }
	while (a==b); 
    int tongchan=0,tongle=0; 
    int i;
    if (a>b) 
	{ 
        for (i=a; i>=b; i--) 
        {
            if (i%2==0) 
            {
            	tongchan+=i; 
            }
            else 
            {
                tongle+=i;
            }
        }
    	cout << "Tong cac so chan giua "<< a << " & " << b << " la: " <<tongchan <<endl;
    	cout << "Tong cac so chan giua "<< a << " & " << b << " la: " <<tongle << endl;
    }
    else // (b>a)
    {
        for (i=b; i>=a; i--)
        {
            if (i%2==0) 
            {
            	tongchan+=i;
            }
            else
            {
                tongle+=i;
            }
        }
    	cout << "Tong cac so chan giua "<< a << " & " << b << " la: " <<tongchan <<endl;
    	cout << "Tong cac so chan giua "<< a << " & " << b << " la: " <<tongle << endl;
    }
	return 0;
}
