#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 300 ;
    int *ptr ;
    ptr = &a;
    printf("dia chi cua bien a %d\n",&a);
    printf("dia chi cua con tro ptr %d\n",ptr);
    printf("gia tri cua bien a %d\n",a);
    printf("gia tri cua con tro ptr %d\n",*ptr);
    *ptr = 1000 ;
    printf("gia tri cua bien a %d\n",a);
    printf("gia tri cua con tro ptr %d",*ptr);
    return 0 ;

}