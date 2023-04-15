#include<stdio.h>
/* h�m kiem tra nam nhuan */
int nhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
/* h�m dem so ngay ng�y trong th�ng */
int songaytrongthang(int m,int y)
{
  switch(m)
  {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
      return 31;
      break;
    }
    case 2:
    {
      if(nhuan(y))
      {
        return 29;
      }
      return 28;
    }
    case 4:case 6:case 9:case 11:
    {
      return 30;
    }   
  }
}
/* h�m kiem tra xem ng�y tiep theo l� ng�y n�o, h�m c� 3 tham so l� y, m, d*/
void ngaytieptheo(int y,int m,int d)
{
  //ta can khai b�o c�c bien ny, nm, nd l� ng�y th�ng nam tiep theo
  int ny=y;int nm=m;int nd=d;
  //neu ng�y th�ng nam thoa m�n dieu kien cua n� (nghia l� th�ng nam phai lon hon 0,....)
  if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
  {
    nd=d+1;
    //neu th�ng nhap v�o kh�ng phai th�ng 12 v� so ng�y bang so ng�y t?i da c?a th�ng th� ta tang th�ng l�n 1 v� ng�y = 1
    if(m!=12&&d==songaytrongthang(m,y))
    {
      nd=1;
      nm=m+1;
    }
    //n?u th�ng nh?p v�o l� th�ng 12 v� s? ng�y b?ng s? ng�y b?ng 31 th� ta tang th�ng, nam l�n 1 v� ng�y s? b?ng 1
    else if(m==12&&d==songaytrongthang(m,y))
    {
      nd=1;
      ny=y+1;
      nm=1;
    }
    else if(m==2)
    {
      //n?u th�ng nh?p v�o l� th�ng 2 v� nam nhu?n th� ng�y t?i da s? l� 29
      if(nhuan(y))
      {
        //n?u ngu?i d�ng nh?p v�o ng�y 29 th� ta tang th�ng l�n 1 v� ng�y b?ng 1
        if(d==29)
        {
          nd=1;
          nm=m+1;
        }
      }
      //ngu?c l?i n?u th�ng 2 v� kh�ng ph?i nam nhu?n th� th�ng 2 c� 28 ng�y
      else
      {
         //n?u ngu?i d�ng nh?p v�o ng�y 28 th� tang th�ng l�n 1 v� ng�y b?ng 1
        if(d==28)
        {
          nd=1;nm=m+1;
        }
      }
    }     
  }
    printf("\nNg�y tiep theo : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int y;int m;int d;
    //s? d?ng v�ng l?p do..while d? y�u c?u ngu?i d�ng nh?p v�o d�ng v?i di?u ki?n c?a ng�y th�ng nam
    do {
    printf( "\nNhap ng�y: ");
    scanf("%d", &d);
    printf( "Nhap th�ng: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    ngaytieptheo(y,m,d);
}



