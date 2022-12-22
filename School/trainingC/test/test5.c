#include<stdio.h>                                      // insert sort
#include<conio.h>
void main(void)
{
int i,j,temp,arr[5] = {23,90,9,25,16};
printf("\nDisplay the array\n");
for(i=0;i<5;i++) printf("%d\t", arr[i]);
for(i=1;i<5;i++)
{
for(j=0; j<i; j++)
{
if(arr[j]>arr[i])
{
temp=arr[i];
for(;i>j;i--) arr[i]=arr[i-1];
arr[i]=temp;
}
}
}
printf("\nThe sorted array\n");
for(i=0; i<5; i++) printf("%d\t", arr[i]);
}