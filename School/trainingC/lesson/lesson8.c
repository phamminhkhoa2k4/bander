#include <stdio.h> \\PHAM MINH KHOA 

 int main() 
{
    float a, b ;
    printf("\nnhap he so a:");
    scanf("%f", &a);
    printf("\nnhap he so b :");
    scanf("%f", &b );
    if(a == 0 )
    {
        if(b == 0)
        {
            printf("\nphuong trinh co so nghiem ");

        }else {
            printf("phuong trinh vo nghiem ");

        }
    } else{
        printf("phuong trinh co nghiem x=%g", -b/a );

    }
    return 0;
}