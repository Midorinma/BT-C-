#include<stdio.h>
#include<conio.h>

int string_ln(char*);

int main() {
   char str[20];
   int length;
   
   printf("\nNhap chuoi bat ky: ");
   gets(str);
   
   length = string_ln(str);
   printf("\nDo dai chuoi %s la: %d", str, length);
  return(0);
}

int string_ln(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}

