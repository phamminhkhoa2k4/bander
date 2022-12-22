#include <stdio.h>     \PHAM MINH KHOA 

main()
{
    float a, b, c, delta , x1 ,x2;
    printf("nhap a:");
    scanf("%f", &a );
    printf("nhap b;");
    scanf("%f", &b);
    printf("nhap c:");
    scanf("%f", &c );
    if (a == 0)
    {
        if(b == 0)
        {
            printf("phuong trinh vo nghiem ");

        }else {
            x1 = c/b;
            printf("phuong trinh co 1 nghiem la" , x1 );

        }
    }else {
        delta - b*b-4*a*c ;
        if(delta < 0)
    
            printf("phuong trinh vo nghiem ");

        }else {
            x1 = (-b+sqrt(delta)/2*a);
            x2 = (-b-sqrt(delta)/2*a);
            printf("phuong trinh co 2 nghiem ");
            printf("%f",x1);
            printf("%f",x2);
        }
     return 0 ;
}