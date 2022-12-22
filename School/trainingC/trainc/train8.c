#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct SinhVien{
        char code[20];
        char name[50];
        double gpa;
        char class[20]
};
 typedef struct SinhVien SV;
int main(){
        SV a;
        scanf("%s",a.code);
        getchar();
        gets(a.name);
        scanf("%lf %s",&a.gpa,a.class);
        printf("%s %s %2.lf %s",a.code,a.name,a.gpa,a.class);
        return 0;
        
}
