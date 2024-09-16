//Write a program that takes an integer as input and checks if it is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if( num/2==0){    //condition to check even number
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
      return 0;
}
