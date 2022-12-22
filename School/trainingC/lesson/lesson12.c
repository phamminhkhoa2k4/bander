#include<stdio.h>
int main()
{
    int e,i,k,j;
    for(i=0;i<=5;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
         printf("\t \t \t");
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(e=0;e<=i;e++)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
