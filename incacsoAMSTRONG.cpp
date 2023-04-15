#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int Dem(long y){
	int q=1;
	while(y>10)
    {
        y = y/10;
        q++;
    }
    return q;
}
double tinh(long y)
{
	int numdigit=Dem(y);
    int w;
    double tong = 0; 
    while(y>0)
    {
        w = y%10;
        y=y/10;
        tong = tong + pow(w,numdigit);
        
    }
    return tong;
}
int main()
{

    for(long j = 1; j<=1000000;j++)
    {
        if(j==tinh(j))
            cout<<j<<", ";
    }
    getch();
} 
