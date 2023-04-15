#include <stdio.h>
 
// Hàm ð? quy
int SumRecursion(int n){
    /*
        sum = 1 + ... + n
     */
    // Cái if này là ði?u ki?n d?ng
    if(n == 0){
        return 0;
    }
    return n + SumRecursion(n-1); // G?i l?i chính nó
}
 
 
/*
    Gi?i thích hàm ð? quy
    Gi? s? n = 4
    4 + SumRecursion(3)
    4 + 3 + SumRecursion(2)
    4 + 3 + 2 + SumRecursion(1)
    4 + 3 + 2 + 1 + SumRecursion(0)
    4 + 3 + 2 + 1 + 0
*/
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    int sum1 = SumRecursion(n);
 	int sum2 = SumRecursion(n);
    printf("\nSum1 = %d", sum1);
    printf("\nSum2 = %d", sum2);
}
