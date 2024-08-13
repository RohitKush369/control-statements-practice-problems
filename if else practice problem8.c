#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%5==0&&a%8==0)
    {
        printf("Number is divisible by 5 and 8");
    }
    else
        printf("Number is not divisible by 5 and 8");
    return 0;
}
