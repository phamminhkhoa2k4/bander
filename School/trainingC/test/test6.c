#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int   squarer()
{
   int x , j ;
   j = x*x ;
   return j ;
}
void main()
{   
    int m, k = squarer(m);
    printf("nhap m =");
    scanf("%d", &m);
    printf("result: %d", k);
}