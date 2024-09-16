//  write a program to find the Largest of Three Numbers.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        printf("Num1 is biggest number");
    }
    else if(num2>num1&&num2>num3){
        printf("Num2 is biggest number");
    }
    else{
        printf("Num3 is biggest number");
    }
    return 0;
}
