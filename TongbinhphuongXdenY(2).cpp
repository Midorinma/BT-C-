#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
	int x,y;
		cout <<"Nhap x: ";
		cin >> x;
		cout <<"Nhap y: ";
		cin >> y;
		
	while (x>y)
	{
		cout <<"x khong duoc nho hon y. NHAP LAI" << endl ;
		cout << endl;
		cout <<"Nhap lai x: ";
		cin >> x;
		cout <<"Nhap lai y:";
		cin >> y;
	}
	
	int i;
    int sum=0;
    for (i=x; i<=y; i++) 
	{
        sum=sum+i*i;
    }
    cout << "Tong binh phuong cac so tu " << x << " den " << y << " la: ";
	cout << sum << endl;
	return 0;
}
