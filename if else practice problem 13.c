//Write a program that checks whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("Year is a leap year");//year divisible by 4,not divisible by 100 and divisible by 400
    }
    else{
        printf("Year is not a leap year");
    }
}
