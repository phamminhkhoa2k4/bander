#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

int menu()
{
    system("cls");
    printf("********************************************\n");
    printf("* Date of Examination: 28/10/2022          *\n");
    printf("* Student Name: pham minh khoa             *\n");
    printf("* RollNo: your_roll number                 *\n");
    printf("********************************************\n\n");
    printf("please choose the task number below :");
    printf("1. Question 1.\n");
    printf("2. Question 2.\n");
    printf("3. Question 3.\n");
    printf("4. Exit program\n\n");
    printf("choose [1-4]");
    int cn;
    scanf("%d",&cn);
    return cn ;
}
void function1()
{
    
}
void main(void)
{
    while(1)
    {
      int cn = menu();
      if(cn > 5 || cn < 1)
         continue;
       switch(cn)
       {
        case 1 :
            function1();
            break;
        case 2 :
            function2();
            break;
        case 3:
            function3();
        case 4 :
            exit(0);
            break;
            
       }
    }
}
