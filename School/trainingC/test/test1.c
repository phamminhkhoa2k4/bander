#include <stdio.h>
main()
{
    printf("********************************************\n");
    printf("* Data of Examination:dd/mm/yyyy           *\n");
    printf("* Student Name: your_fullname              *\n");
    printf("* Student Number: your_roll number         *\n");
    printf("********************************************\n");
    

    printf("1. Question 1.\n");
    printf("2. Question 2.\n");
    printf("3. Question 3.\n");
    printf("4. Exit program");
    printf("nhap");

    int num ;
    scanf("%d", &num);
    switch (num){

    case 1:
       printf("You choose  Question 1");
       break;
    case 2:
       printf("You choose  Question 2");
       break;
    case 3:
       printf("You choose  Question 3");
       break;
    case 4:
       exit(0);
       default :
       printf(" nhap cai khac");

    }
    return 0 ;
}
