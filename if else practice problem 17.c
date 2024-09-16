//Write a program that takes a number (1–7) as input and prints
// the corresponding day of the week using a switch-case statement.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number between 1-7:");
    scanf("%d",&num);
    switch(num){
case 1:
    printf("Monday\n");
    break;
case 2:
    printf("Tuesday\n");
    break;
case 3:
    printf("Wednesday\n");
    break;
case 4:
    printf("Thursday\n");
    break;
case 5:
    printf("Friday\n");
    break;
case 6:
    printf("Saturday\n");
    break;
case 7:
    printf("Sunday\n");
    break;
default:
    printf("Invalid number.enter number between 1-7.\n");
    }
    return 0;
}

