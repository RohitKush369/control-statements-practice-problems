//Write a program that checks if a given number is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){//condition for positive number
        printf("Number is positive");
    }
    else if(num<0){ // condition for negative number
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}
