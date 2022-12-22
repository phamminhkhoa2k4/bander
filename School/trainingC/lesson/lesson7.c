#include<stdio.h>        \\PHAM MINH KHOA 
int main()
{
 int thang,nam;
 float i;   
 printf("nhap so thang");
 scanf("%d",&thang);
 if (thang > 7) 
 {
   i=thang%2;
   if (i==0)
   {
    printf("thang co 31 ngay");
   }
   else
   {
    printf("thang co 30 ngay");
   }
 }
 else
 {
   if (thang == 2)
   {
    scanf("%d",&nam);
    if (nam%4==0)
    {
        printf("thang co 29 ngay");
    }
    else
    {
        printf("thang co 28 ngay");
    }
   }
   else
   {
    i=thang%2;
   if (i==0)
   {
    printf("thang co 30 ngay");
   }
   else
   {
    printf("thang co 31 ngay");
   }
   }
 }
  return 0;
}
