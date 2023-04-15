#include<stdio.h>
/* hàm kiem tra nam nhuan */
int nhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
/* hàm dem so ngay ngày trong tháng */
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
/* hàm kiem tra xem ngày tiep theo là ngày nào, hàm có 3 tham so là y, m, d*/
void ngaytieptheo(int y,int m,int d)
{
  //ta can khai báo các bien ny, nm, nd là ngày tháng nam tiep theo
  int ny=y;int nm=m;int nd=d;
  //neu ngày tháng nam thoa mãn dieu kien cua nó (nghia là tháng nam phai lon hon 0,....)
  if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
  {
    nd=d+1;
    //neu tháng nhap vào không phai tháng 12 và so ngày bang so ngày t?i da c?a tháng thì ta tang tháng lên 1 và ngày = 1
    if(m!=12&&d==songaytrongthang(m,y))
    {
      nd=1;
      nm=m+1;
    }
    //n?u tháng nh?p vào là tháng 12 và s? ngày b?ng s? ngày b?ng 31 thì ta tang tháng, nam lên 1 và ngày s? b?ng 1
    else if(m==12&&d==songaytrongthang(m,y))
    {
      nd=1;
      ny=y+1;
      nm=1;
    }
    else if(m==2)
    {
      //n?u tháng nh?p vào là tháng 2 và nam nhu?n thì ngày t?i da s? là 29
      if(nhuan(y))
      {
        //n?u ngu?i dùng nh?p vào ngày 29 thì ta tang tháng lên 1 và ngày b?ng 1
        if(d==29)
        {
          nd=1;
          nm=m+1;
        }
      }
      //ngu?c l?i n?u tháng 2 và không ph?i nam nhu?n thì tháng 2 có 28 ngày
      else
      {
         //n?u ngu?i dùng nh?p vào ngày 28 thì tang tháng lên 1 và ngày b?ng 1
        if(d==28)
        {
          nd=1;nm=m+1;
        }
      }
    }     
  }
    printf("\nNgày tiep theo : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int y;int m;int d;
    //s? d?ng vòng l?p do..while d? yêu c?u ngu?i dùng nh?p vào dúng v?i di?u ki?n c?a ngày tháng nam
    do {
    printf( "\nNhap ngày: ");
    scanf("%d", &d);
    printf( "Nhap tháng: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    ngaytieptheo(y,m,d);
}



