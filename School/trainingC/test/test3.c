#include <stdio.h>
#include <string.h>
void main()
{
    char a, str[81], *ptr;
    printf("\nEnter a sentence:");
    gets(str);
    printf("\nEnter character to search for:");
    a = getche();
    ptr = strchr(str,a);at address: %u" ,str);
    printf("\nFirst oc
    printf("\nString start curence of the character is at address : %u",ptr);
    printf("\n position of first occurrence (starting from 0)is: %d", strstr);
}