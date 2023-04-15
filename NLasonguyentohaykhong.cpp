#include <iostream>
using namespace std;
int isprime(int n){
    //flag = 0 => kh�ng ph?i s? nguy�n t?
    //flag = 1 => s? nguy�n t?
    
    int flag = 1;

    if (n <2) return flag = 0; /*S? nh? hon 2 kh�ng ph?i s? nguy�n t? => tr? v? 0*/
    
    /*S? d?ng v�ng l?p while d? ki?m tra c� t?n t?i u?c s? n�o kh�c kh�ng*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Ch? c?n t�m th?y 1 u?c s? l� d? v� tho�t v�ng l?p*/
        }
       i++;
    }

    return flag;
}

int main(){
    int n;
 
    cout << "Nhap so tu nhien= ";
    cin >>  n;

    int check = isprime(n);
 
    if( check == 1 ) cout << n<< " la so nguyen to";
    else cout << n<< " khong phai la so nguyen to";
    return 0;
}

