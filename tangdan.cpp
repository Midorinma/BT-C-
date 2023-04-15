#include <iostream>
#include<algorithm>
void Sort(int &a, int &b, int &c){
    if(a>b){
       int tmp = a;
       a = b;
       b = tmp;
    }
    if(a>c){
       int tmp = a;
       a=c;
       c = tmp;
    }
    if(b>c){
       int tmp = b;
       b=c;
       c=tmp;
    }
    return;
}
int main(){

    std::cout << "Nhap 3 so nguyen: " << std::endl;
    int num1;
    int num2;
    int num3;
    std::cin >> num1 >> num2 >> num3;
	int outlook1=num1;
	int outlook2=num2;
	int outlook3=num3;
    Sort(outlook1,outlook2,outlook3);
    std::cout << num1 << " " << num2 << " " << num3 << " " << " khi sap xep tang dan: ";
    std::cout << outlook1 << " " << outlook2 << " " << outlook3 <<std::endl;

    return 0;
}
