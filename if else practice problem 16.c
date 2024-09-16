//Write a program that takes two numbers and an operator (+, -, *, /) as
//input and performs the respective operation using switch-case.
#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter an operator:");
    scanf(" %c",&op);
switch(op){
case '+':
    printf("%d\n",num1+num2);//For Addition
    break;
case '-':
   printf("%d\n",num1-num2);//For Subtraction
    break;
case '*':
   printf("%d\n",num1*num2);//For Multiplication
    break;
case '/':
if(num2!=0){
    printf("%d\n",num1/num2);//For Division
}
else{
    printf("Division by zero is not allowed\n");
}
    break;
default:
printf("Invalid operator:\n");
}
return 0;
}
