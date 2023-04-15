#include <iostream>
using namespace std;
int main() 
{
    float x;
    int y;
    long luyThua = 1; 
    cout <<"Nhap x (Co so): ";
    cin >> x;
    cout <<"Nhap y (Luy thua): ";
    cin >> y;
           
    for (int i = 1; i <= y; i++) 
	{
        luyThua = luyThua * x;
    }    
    cout << x << "^"<< y << " = " << luyThua << endl;
    return 0;
}
