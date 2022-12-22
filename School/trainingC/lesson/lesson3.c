#include <stdio.h>       \\PHAM MINH KHOA 

int main() {
 
    int a, b ;
    printf("\nnhap a = ");
    scanf("%d", &a);
    printf("\nnhap b = ");
    scanf("%d", &b);
    printf("a = %d, b = %d", a,b );

    int temp = a; 
     a = b;
     b = temp ;
    printf("\na = %d,b = %d", a, b);
     return 0;
     }