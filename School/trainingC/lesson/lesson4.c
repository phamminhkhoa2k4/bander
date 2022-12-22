#include<stdio.h>           \\PHAM MINH KHOA 
#include<math.h>
int main()
{
    float i,e;
    int a,b,c,r;
    int sogocvuong,socanh;
    printf("nhap so goc vuong :");
    scanf("%d",&sogocvuong);
    if (sogocvuong >=2)
    {
        if (sogocvuong >4)
        {
            printf("phuong trinh khong can tinh");
        }
        else
        {
            printf("nhap chieu dai:");
            scanf("%d",&a);
            printf("nhap chieu rong:");
            scanf("%d",&b);
            if (a==b)
            {
                i=a*b;
                printf("dien tich hinh vuong la : %f\n",i);
                e=a*4;
                printf("chu vi hinh vuong la : %f\n",e);
            }
            else
            {
                i=a*b;
                printf("dien tich hinh chu nhat la : %f\n",i);
                e=(a+b)*2;
                printf("chu vi hinh chu nhat la : %f\n",e);
            }
        }
    }
    else 
    {
      printf("nhap so canh:");
      scanf("%d",&socanh);
      if (socanh > 3)
      {
        printf("khong tinh vi khong thich");
      }  
      else
      {
        if (socanh ==3)
        {
        printf("nhap canh 1 ");
        scanf("%d",&a);
        printf("nhap canh 2 ");
        scanf("%d",&b);
        printf("nhap canh 3 ");
        scanf("%d",&c);
        i=sqrt((a*a+b*b+c*c)*(a*a+b*b+c*c)-2*(a*a*a*a+b*b*b*b+c*c*c*c))/4;
        printf("dien tich hinh tam giac la %f",i);
        e=a+b+c;
        printf("chu vi hinh tam giac la %f",e);
        }
        else 
        {
          if (socanh==0)
          {
          printf("nhap ban kinh r");
          scanf("%d",&r);
          i=3.14*r*r;
          printf("dien tich hinh tron la %d",i);
          e=2*3.14*r;
          printf("chu vi hinh tron la %d",e);
          }
          else
          { printf("error"); } } }
    }
    return 0; 
}