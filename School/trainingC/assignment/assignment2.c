#include <stdio.h>
main()

{
    printf("********************************************\n");
    printf("*Date of Examination: 24/10/2022           *\n");
    printf("*Student Name: pham minh khoa              *\n");
    printf("*Student Number: A22086                    *\n");
    printf("********************************************\n");
    printf("\n1. Summation");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nYour choose:");
    printf("\nPlease choose the task number below:");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Choose Summation");
        break;

    case 2:
        printf("Choose  Subtraction");
        break;
    case 3:
        printf("Choose Multiplication");
        break;
    case 4:
        printf("Choose  Division");
        break;
    case 5:
       exit(0);
       default :
       printf(" enter another");

    }

    return 0 ;

}
