#include<iostream>
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//Ðánh d?u chýa có ph?n t? nào s? d?ng h?t
int A[MAX];//Lýu hoán v? vào m?ng A
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chýa ðý?c ch?n th? s? ðánh d?u
        if (!Bool[i]) {
            A[k] = i; // Lýu m?t ph?n t? vào hoán v?
            Bool[i] = 1;//Ðánh d?u ð? dùng
            if (k == n)//Ki?m tra n?u ð? ch?a m?t hoán v? th? xu?t
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    cout << "Mhap n: ";
    cin >> n;
    Try(1);
}
