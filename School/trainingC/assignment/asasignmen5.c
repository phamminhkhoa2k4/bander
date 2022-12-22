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
    printf("*Student Number: A22086                   * \n");
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
int chucnang1()
{
    system("cls");
    printf("enter the price:");
    int p, d = 0;
    scanf("%d", &p);
    if (p>=0) 
    {
    if (p > 5000 && p  <= 100000)
    {
        d = p / 100 * 10;
    }
    else if (p > 10000 && p <= 20000)
    {
        d = p / 100 * 15;
    }
    else
    {
        d = p / 100 * 20;
    }
    printf("\ntotal invoce is :");
    printf("%d", p);
    printf("\ndiscount :");
    printf("%d", d);
    printf("\nafter-discount invoice :");
    printf("%d", p + d);
    }
    else 
    {
        printf(" syntax error");
    }
    getch();
}
int chucnang2()
{
    system("cls");
    char str[100];
    int i, total;
    total = 1;
    printf("\n Please Enter any String :  ");
    fflush(stdin);
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            total++;
        }
    }
    printf("\n The Total Number of Words in this String : %s  = %d", str, total);
    printf("\nthe current string in reversed is: %s", strrev(str));
    getch();
}
int chucnang3()
{
    system("cls");
    printf("Enter Marks:");
    int mk;
    scanf("%d", &mk);
    if (mk > 10 || mk < 0)
    {
        printf("Invalid value Entered");
    }
    else
    {
        switch (mk)
        {
        case 8:
            printf("Excellent");
            break;
        case 9:
            printf("Excellent");
            break;
        case 10:
            printf("Excellent");
            break;
        case 7:
            printf("Very Good");
            break;
        case 6:
            printf("Good");
            break;
        case 5:
            printf("work hard");
            break;
        default:
            printf("poor");
        }
    }
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