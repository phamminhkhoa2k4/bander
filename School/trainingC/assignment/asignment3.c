#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int menu()
{
    system("cls");
    printf("********************************************\n");
    printf("* Date of Examination: 27/10/2022          *\n");
    printf("* Student Name: pham minh khoa             *\n");
    printf("* Student Number: A22086                   *\n");
    printf("********************************************\n");
    printf("Please choose the task number below:\n");
    printf("1. Question 1.\n");
    printf("2. Question 2.\n");
    printf("3. Question 3.\n");
    printf("4. Exit program.\n");
    int cn;
    scanf("%d", &cn);
    return cn;
}
int chucnang1()
{
    system("cls");
    int ary[100], ary2[100], ary3[100];
    int n, i, max, min;
    printf("\nNhap so luong phan tu n = ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("\nNhap lai n = ");
        }
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap phan tu thu %d = ", i + 1);
        scanf("%d", &ary[i]);
    }
    max = ary[0];
    for (i = 0; i < n; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    min = ary[0];
    for (i = 0; i < n; i++)
    {
        if (ary[i] < min)
        {
            min = ary[i];
        }
    }
    printf("gia tri lon nhat la %d :", max);
    printf("\ngia tri nho nhat la %d :", min);
    int tg;
    for (int i = 0; i < n; i++)
    {
        ary2[i] = ary[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary2[i] < ary2[j])
            {
                tg = ary2[i];
                ary2[i] = ary2[j];
                ary2[j] = tg;
            }
        }
    }
    printf("\nary2 la:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ary3[i] = ary[i];
    }
    int start = 0, end = n - 1;
    while (start < end)
    {
        tg = ary3[start];
        ary3[start] = ary3[end];
        ary3[end] = tg;
        start++;
        end--;
    }
    printf("\nary3 la :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ary3[i]);
    }
    getch();
}
void chucnang2()
{
   system("cls");
    int i, na = 0, pa = 0;
    char string[100], chr;
    printf("nhap chuoi ky tu :");
    scanf("%s",string);
    printf("%s", string);
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
        default:
            pa++;
        }
    }
    printf("\nso nguyuen am la : %d", na);
    printf("\nso phu am la : %d\n", pa);
    printf("chuoi dao nguoc la : %s", strrev(string));
printf("\nky tu ban can tim la:");
    scanf("%*c%c", &chr);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == chr)
        {
            printf("ky tu nam o vi tri %d \n", i + 1);
        }
    }
    getch();
}
void chucnang3()
{
    char string1[50];
    int i, length;
    int flag = 0;
    printf("nhap chuoi:");
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
        printf("%s khong la palindrome", string1);
    }
    else
    {
        printf("%s la palindrome", string1);
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