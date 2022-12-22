#include <stdio.h>                                       //bubble sort
void main(void)
{
int i, j, temp, arr_num[5] = {23,90,9,25,16};
printf("\nDisplay the array\n");
for(i=0; i<5; i++) printf("%d\t", arr_num[i]);

for(i=3; i>=0; i--)
{
for(j=4; j>=4-i; j--)
{
if(arr_num[j]<arr_num[j-1])
{
temp=arr_num[j];
arr_num[j]=arr_num[j-1];
arr_num[j-1]=temp;
}
}
}

printf("\nThe sorted array\n");
for(i=0; i<5; i++) printf("%d\t", arr_num[i]);
}

