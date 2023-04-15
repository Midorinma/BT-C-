#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int demkytu=0;
int demtu=1;
cout << "Ban nhap mot cau gom cac chu thuong: " << endl;
char ch='a';
ch=getche();
while(ch!='\r')
{

if(ch==' ')
demtu++;
else
demkytu++;
}
cout << "\n So tu trong cau la = " << demtu << endl;
cout << "\nSo ky tu trong cau la = " << demkytu-1<< endl;
return 0;
}
