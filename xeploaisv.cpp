#include <iostream>
using namespace std;
  
int main () {
     
   char diem ;
    cout << "KQ diem cua ban:"<<endl;
    cin>>diem;
   switch(diem) {
      case 'A':
         cout << "Xuat xac" << endl; 
         break;
      case 'B':
         cout << "Gioi" << endl; 
         break;
      case 'C':
         cout << "Kha" << endl;
         break;
      case 'D':
         cout << "Trung Binh" << endl;
         break;
      case 'F':
         cout << "Yeu" << endl;
         break;
      default:
         cout << "Diem khong hop le" << endl;
   }
   
  
   return 0;
}
