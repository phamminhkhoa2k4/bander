#include <stdio.h>        \\PHAM MINH KHOA 

 int  main()  
{
 float a, b, c, max ; printf("\nnhap 3 so a, b, c: ");
 scanf("%f%f%f", &a, &b, &c);

 max = a ;
 if(b > max )
 {
    max = b;
 }
 if(c >  max )
 {
    max = c ;
 }
   printf("gia tri lon nhat la %f", max );
   return 0 ;
}
