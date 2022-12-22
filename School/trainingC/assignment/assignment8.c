#include<stdio.h>
#include <stdlib.h>
int main()
{
    printf("vui long chon loai phong:\n");
    printf("1.phong thuong.\n");
    printf("2.phong vip.\n");
    printf("3.phong super vip.\n");
    int p;
    scanf("%d", &p);
    float t1,t2;
    switch (p)
    {
        case 1 :
        t1=100000/8;
        t2=300000/6;
        break;
        case 2 :
        t1=250000/8;
        t2=350000/6;
        break;
        case 3 :
        t1=100000;
        t2=800000/6;
        break;
        default :
        exit(0);
        break;
    }
    float start,end,total;
    printf("thoi gian bat dau su dung :");
    scanf("%f",&start);
    printf("nhap tg ket thuc :");
    scanf("%f",&end);
    if (start<end)
    {
    if (start<10 || end>24 || end <10)
    {
        printf("khong phai thoi gian hoat dong");
    }
    else 
    {
        if (start<18)
    {
        if (end<=18)
        {
            total=(end-start)*t1;
        }
        else
        {
        total=((18-start)*t1)+((6-(24-end))*t2);
        }
    }
    else 
    {
        total=(6-((start-18)+(24-end)))*t2;
    }
    printf("tong chi phi la %fVND",total);
    }
    }
    else
    {
        printf("error !");
    }

}
