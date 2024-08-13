#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if((year%4==0)&&(year%400==0||year%100!=0))
     {
         printf("year is leap a year");
     }
     else
        printf("year is not a leap year");
     return 0;
}
