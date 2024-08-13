#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    sum=x+y;
    if(sum>35){
        printf("EXCELLENT");
    }
    else
        printf("GOOD");
    return 0;
}
