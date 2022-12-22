#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void main()
{
    while (1)
    {
        int cn = menu();
        if (cn > 5 || cn < 1)
            continue;
        switch (cn)
        {
        case 1:
            Summation();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
int menu()
{
    system("cls");
    printf("******************************************* \n");
    printf("*Date of Examination:24/10/2022/          * \n");
    printf("*Sutdent Name: pham minh khoa             * \n");
    printf("*Student Number: A22086                   * \n");
    printf("******************************************* \n");
    printf("Please choose the task number below: \n");
    printf("1. Summation \n");
    printf("2. Subtraction\n");
    printf("3. Multiplication \n");
    printf("4. Division\n");
    printf("5. exit\n");
    int cn;
    printf("choose [1-5]: ");
    scanf("%d", &cn);
    return cn;
}

int Summation()
{
    int a, b, ans;
    system("cls");
    printf("Enter tow number to Summation\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    ans = a + b;
    printf("Summation is:%d", ans);
    getch();
}

int Subtraction()
{
    int a, b, ans;
    system("cls");
    printf("Enter tow number to Subtraction\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    ans = a - b;
    printf("Subtraction is:%d", ans);
    getch();
}

int Multiplication()
{
    int a, b, ans;
    system("cls");
    printf("Enter tow number to Multiplication\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    ans = a * b;
    printf("Multiplication is:%d", ans);
    getch();
}

int Division()
{
    float a, b, ans;
    system("cls");
    printf("Enter tow number to Division\n");
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    if (b == 0)
    {
        printf("can't slove");
    }
    else
    {
        ans = a / b;
        printf("Division is:%f", ans);
    }
    getch();
}