#include <stdio.h>

int menu(){
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
    printf("choose [1-4]:");
    int cn;
    scanf("%d",&cn);
    return cn;    
}
void main(void){
    while(1){
        int cn = menu();
            if(cn < 5 || cn > 1)
                continue;
            switch(cn){
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
