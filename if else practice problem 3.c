#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("Number A is biggest");
    }
    if(b>a&&b>c){
        printf("Number B is biggest");
    }
        else
            printf("Number C is biggest");
    return 0;
}
