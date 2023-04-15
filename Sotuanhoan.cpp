/*3.6 CHUOI TUAN HOAN
*/
 
//KHAI BAO THU VIEN
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//KHAI BAO KIEU DU LIEU
 
//KHAI BAO BIEN TOAN CUC
char s[500];
 
//KHAI BAO NGUYEN MAU HAM
bool kttuanhoan(char s[]);
void timkvan(int &k,int &n,int l);
 
//CHUONG TRINH CHINH
 
int main ()
{
    printf("Nhap chuoi : ");gets(s);
    if (kttuanhoan(s)==1)
    {
        printf("Chuoi tuan hoan\n");
    }//if
    else
    {
        printf("Chuoi khong tuan hoan\n");
    }//else
    //dung chuong trinh va kiem tra
    system ("pause");
 
}//main
 
//CAI DAT HAM
bool kttuanhoan(char s[])
{
    int k=1,n=2,l=strlen(s);
    if (l<2)
    {
        return 0;
    }
    timkvan(k,n,l);
    for (int i=0;i<l-k;)
    {
        if (k>l/2)
        {
            return 0;
        }//if
        if (s[i]!=s[i+k])
        {
            ++k;
            n=0;
            i=0;
            timkvan(k,n,l);
        }//if
        else
        {
            ++i;
        }//else
    }//for
    return 1;
}//kttuanhoan
 
void timkvan(int &k,int &n,int l)
{
    while (k<=l/2)
    {
        if (l%k==0)
        {
            n=l/k;
            return;
        }//if
        ++k;
    }//while
}//timk&n
