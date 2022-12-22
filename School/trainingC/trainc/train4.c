#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct SinhVien
{
    char ma[20];
    char name[50];
    double gpa;
    char lop[20];
};
typedef struct SinhVien SV;

int main()
{
    SV a;
    scanf("%s", a.ma);
    getchar();
    gets(a.name);
    scanf("%lf %s", &a.gpa, a.lop);
    printf("%s %s %2.lf %s\n", a.ma, a.name, a.gpa, a.lop);
    return 0;
}
