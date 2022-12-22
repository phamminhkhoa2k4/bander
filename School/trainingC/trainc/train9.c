#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[1000];
    scanf("%s",a);
    for(int i = 0;i < a; i++){
        printf("%c\n",a[i]);
    }
    printf("%d",strlen(a));
    return 0 ;

}