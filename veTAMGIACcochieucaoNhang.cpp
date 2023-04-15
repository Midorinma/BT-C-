#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 
  
using namespace std; 

int main()
{ 
 int n,i,j;
 cout << "Nhap n: ";
 cin >> n;  
 i=n+1; 
 j=n+1; 
  
for(i=1;i<=n+1;i++)
{ 
  for(j=n-i+1;j>=1;--j)
  	cout<<"*"; 
  	cout<<"\n"; 
} 
   
   cout<<"\n"; 
   system("PAUSE"); 
   return EXIT_SUCCESS; 
}
