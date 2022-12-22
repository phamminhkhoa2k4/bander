#include <stdio.h>
#include <conio.h>

void main(void)
{
    int i, j, temp, a[10] = {23, 90, 9, 25, 16, 17, 26, 19, 40, 100};
    // Display the array
    printf("\nDisplay the array\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    // Bubble Sort
    for (i = 8; i >= 0; i--)
    {
        for (j = 9; j >= 9 - i; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // Display The sorted array
    printf("\nThe sorted array\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}