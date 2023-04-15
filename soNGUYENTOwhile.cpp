#include<iostream>
#include<conio.h>
#include<math.h>   

using namespace std;

int main()
{
     int n,i=5,c=2;
     cout<<"Nhap mot so bat ky: ";
     cin>>n;
     
			
	if (n<2)
	{
		cout<<"Khong ton tai bat ky so nguyen to nao!" << endl;	
	}
	else if (n==2)
	{
		cout<<"Danh sach cac so nguyen to tu 0 den 2 la: 2 " << endl;	
	}
	else if (n>2)
	{
		cout<<"Danh sach cac so nguyen to tu 0 den " << n << " la: " << endl;
    	cout<<2<<"        ";
		cout<<3<<"        ";
	     
    while (i<=n)
    {
    	int j=2; 
		while (j*j<=i)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) 
			{
                cout << i << "        ";
                c++;
                if (c==10)
                {
                	cout<<endl;
                	c=0;
		}
                	
            }
    	j++;
        }
        i++;
    }
 	}  
		    
	return 0;
 }
