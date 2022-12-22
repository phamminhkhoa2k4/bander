#include <stdio.h>      \\PHAM MINH KHOA 

 int main() 
{
    int num, r;
    printf("nhap mot so ;");
    scanf("%d", &num);
    r = num % 2 ;
    if( r == 0)
         printf("this is even number");
    else 
         printf("this is odd number");
    return 0 ;
    
}