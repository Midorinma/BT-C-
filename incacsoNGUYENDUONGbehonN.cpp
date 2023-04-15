#include <iostream> 
#include<iomanip>
#include<math.h>
using namespace std; 
int main () 
{
   int n,i,j;
   cout<<"Nhap mot so nguyen duong bat ki :";
   cin>>n; 
   for(i=2; i<=n; i++) { 
      for(j=2; j <=sqrt(n); j++) 
         if(!(i%j)) break; // neu tim thay he so, thi khong la so nguyen to 
         if(j > (i/j)) cout<<setw(3)<<i; 
   } 
return 0; 
}
