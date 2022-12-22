#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int menu()
{
    system("cls");
    printf("Cac chuc nang: \n");
    printf("1. tinh dien tich hinh vuong,chu nhat,vuong,tron \n");
    printf("2. giai phuong trinh bac 2 \n");
    printf("3. tinh ngay trong nam \n");
    printf("4. Thoat\n\n");
    printf("Moi ban chon [1-3]: ");
    int cn;
    scanf("%d",&cn);
    return cn;
}

int chucnang1()
{
system("cls");
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
          {
            printf("khong yinh vi khong thich");
          }
        }
      }
    }
getch();
}

int chucnang2()
{
    system("cls");
    float  x1,x2,x,a,b,c,D;
    printf("nhap ba so a");
    scanf("%f",&a);
    printf("nhap ba so b");
    scanf("%f",&b);
    printf("nhap ba so c");
    scanf("%f",&c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
            printf("phuong trinh vo so nghiem");
            }
            else
            {
            printf("phuong trinh vo nghiem");
            }

        }
        else
        {
         if (c==0)
            {
            printf("phuong trinh co mot nghiem x=0");
            }
            else
            {
            x=-c/b;
            printf("phuong trinh co nghiem la %f\n",x);
            }   
        }
        getch();
    }
    else
    {
        D=(b*b)-(4*a*c);
        if (D==0)
        {
            x=-b/2*a;
            printf("phuong trinh co nghiem kep %f\n",x);
        }
        else
        {
            if (D>0)
            {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("phuong trinh co hai nghiem %f,%f\n",x1,x2);
            }
            else
            {
            printf("phuong trinh vo nghiem");
            }
        }
    }
    getch();
}

int chucnang3()
{
    system("cls");
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
  getch();
}

void main()
{
    while(1)
    {
        int cn = menu();
        if(cn>4 || cn <1)
        continue;
    switch(cn)
    {
    case 1:
        chucnang1();
        break;
    case 2:
        chucnang2();
        break;
    case 3:
        chucnang3();
        break;
    case 4:
        exit(0);
        break;
    }
    }
}