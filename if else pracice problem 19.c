//Write a program that checks if a given number is a palindrome
// (i.e., it reads the same backward as forward).
#include<stdio.h>
int main()
{
    int num,remainder,reverse=0,origionalnum;
    printf("Enter a number:"); //12321
    scanf("%d",&num);
   origionalnum=num;
   while(num!=0){
   remainder=num%10;
   reverse=reverse*10+remainder;
   num/=10;
}
   if(origionalnum==reverse){
    printf("Number is palindrome");
   }
   else{
    printf("Number is not palindrome");
   }
}
