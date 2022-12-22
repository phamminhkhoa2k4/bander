#include<stdio.h>                     \\ phạm minh khoa 
int main()
{
  int n;
  float x = 1;
  do
  {
     printf("\nNhap vao so n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("\nSo nho hon hoac bang 1,  nhap lai !");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    x = x* i;
  }
  printf("\n ket qua %d là: %f",n, x );
   return 0;
