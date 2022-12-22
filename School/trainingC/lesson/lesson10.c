#include <stdio.h>                       \\ phạm minh khoa 
int main(){
    int n; 
    int sum = 0; 
    printf("nhap n = ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
    }   
    printf("S(%d) = %d", n,sum);
    return 0; 
}