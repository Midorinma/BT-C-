#include<iostream>
#include<conio.h>
using namespace std;  
class sophuc
{
              int a,b;
    public:
              void getvalue()
              {
                 cout<<"Hay nhap phan thuc, phan ao:";
                 cin>>a>>b;
              }
              sophuc operator+(sophuc i)
              {
                            sophuc q;
                            q.a=a+i.a;
                            q.b=b+i.b;
                            return(q);
              }
              sophuc operator-(sophuc i)
              {
                            sophuc q;
                            q.a=a-i.a;
                            q.b=b-i.b;
                            return(q);
              }
              void display()
              {
                            cout<<a<<"+"<<b<<"i"<<"\n";
              }
};

int main()
{
   
   sophuc i1,i2,kq1,kq2;
 
   i1.getvalue();
   i2.getvalue();
 
   kq1 = i1+i2;
   kq2 = i1-i2;
 
   cout<<"So phuc ðuoc nhap vào:\n";
   i1.display();
   i2.display();
  
   cout<<"Ket qua cong, tru so phuc:\n";
   kq1.display();
   kq2.display();
  
   return 0;
}
