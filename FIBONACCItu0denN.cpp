#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

     
     int n;
     long last=1,before=0,sum=0;
     
    	cout<<"Nhap n: ";
    cin>>n;
    
    if (n>0)
    {
 		cout<< 0 << " ";
     	while(sum <=n)
     	{
    		cout<<last <<"  ";
    		sum=before+last;
    		before=last;
    		last=sum;
     	}
     return 0;
    }
    else if (n<=0)
    	cout<<"Khong ton tai day Fibonacci";
 }
