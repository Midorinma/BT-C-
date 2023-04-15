#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

long int sophut,phi=0;
float tong;
const int phicodinh=25000;
cout << "So phut goi trong thang ";
cin>>sophut;
if(sophut>200)
phi=(sophut-200)*200+150*400+50*600;
else if(sophut>50)
phi=(sophut-50)*400+50*600;
else
phi=sophut*600;
tong=phi+phicodinh;
cout << "Ban da goi " << sophut << " phút." << endl;
cout << "So tien dien thoai phai nop la " << tong << endl;


return 0;
}
