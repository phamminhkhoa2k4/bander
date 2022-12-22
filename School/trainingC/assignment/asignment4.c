#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int menu()
{
    system("cls");
    printf("******************************************* \n");
    printf("*Date of Examination:26/10/2022/          * \n");
    printf("*Sutdent Name: pham minh khoa             * \n");
    printf("*Student Number: A22086                   * \n");
    printf("******************************************* \n");
    printf("Please choose the task number below: \n");
    printf("1. number to word \n");
    printf("2. number not divisible by 6 \n");
    printf("3. sum and average \n");
    printf("4. palindrome string \n");
    printf("5. exit\n");
    printf("choose [1-5]: ");
    int cn;
    scanf("%d", &cn);
    return cn;
}
void chucnang1()
{
    system("cls");
    int n;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf("Zero ");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    default:
        printf("error");
    }
    getch();
}

void chucnang2()
{
    system("cls");
    int i;
    printf("the number not divisible by 6 are:\n");
    for (i = 0; i <= 100; i++)
        if (i % 6 != 0)
            printf("%d\t", i);
            getch();
        
}
void chucnang3()
{
    system("cls");
    int i, n, sum = 0;
    float avg ;
    for (i = 1; i <= 10; i++) 
    {   
        printf(" enter the number-%d :", i);

        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10.0;
    printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);
    getch();
}
void chucnang4()
{
    system("cls");
     char string1[50];
    int i, length;
    int flag = 0;
    printf("enter string :");
    scanf("%s", string1);
    length = strlen(string1);
    for (i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("%s this is not palindrome", string1);
    }
    else
    {
        printf("%s this is palindrome", string1);
    }
    getch();
}
void main(void)
{
    while (1)
    {
        int cn = menu();
        if (cn > 5 || cn < 1)
            continue;
        switch (cn)
        {
        case 1:
            chucnang1();
            break;

        case 2:
            chucnang2();
            break;
        case 3:
            chucnang3();
            break;
        case 4:
            chucnang4();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
