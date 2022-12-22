#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int menu()
{
    system("cls");
    printf("******************************************* \n");
    printf("*Date of Examination:27/10/2022/          * \n");
    printf("*Sutdent Name: phamminhkhoa                * \n");
    printf("*Student Number: A22086                 * \n");
    printf("******************************************* \n");
    printf("Please choose the task number below: \n");
    printf("1. Question 1.\n");
    printf("2. Question 2.\n");
    printf("3. Question 3.\n");
    printf("4. Exit program\n");
    int cn;
    scanf("%d", &cn);
    return cn;
}
void chucnang1()
{
    system("cls");
    int i, n;
    int number[200];
    char option;
    do
    {
        printf("nhap phan tu thu %d : ",i);
        scanf("%d", &number[i]);
        i++;
        option = getchar();
    } while (option != 'q' && option != 'Q');
    printf("chuoi da nhap la :\n");
    for (n = 0; n < i - 1; n++)
    {
        printf("%d  ", number[n]);
    }
    int max = number[0];
    for (n = 0; n < i - 1; n++)
    {
        if (max < number[n])
            max = number[n];
    }
    printf("\ngia tri lon nhat la %d", max);
    getch();
}
void chucnang2()
{
    system("cls");
    int i,kt=0, na = 0;
    char string[100], chr;
    printf("nhap chuoi ky tu :");
    fflush(stdin);
    gets(string);
    printf(" \nthe total number of character in the is :%d", strlen(string));
    for (i = 0; i < strlen(string); i++)
    {
        switch (string[i])
        {
        case 'u':
            na++;
            break;
        case 'e':
            na++;
            break;
        case 'o':
            na++;
            break;
        case 'a':
            na++;
            break;
        case 'i':
            na++;
            break;
        case ' ':
            kt++;
            break;
        default:;
        }
    }
    printf("\nso nguyuen am la : %d", na);
    printf("\nso khoang trang la %d",kt);
    printf("\nchuoi dao nguoc la : %s", strrev(string));
    getch();
}
void chucnang3()
{
    system("cls");
    int n,t=1;
    printf("nhap n :"); scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        t=t*i;
    }
    printf("the factorial of the number is:%d",t);
    getch();
}
void main(void)
{
    while (1)
    {
        int cn = menu();
        if (cn > 4 || cn < 1)
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
            exit(0);
            break;
        }
    }
}
