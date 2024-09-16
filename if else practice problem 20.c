//Write a program to check whether a given 3-digit number is an Armstrong number or not.
 //An Armstrong number is one in which the sum of cubes of digits equals the number itself, e.g., 153.
 #include<stdio.h>
 int main()
 {
     int num;
     int sum;
     int ones;
     int tens;
     int hundreds;
     printf("Enter a number:");
     scanf("%d",&num);
    ones=num%10;
    tens=num/10%10;
    hundreds=num/100;
     sum=(ones*ones*ones)+(tens*tens*tens)+(hundreds*hundreds*hundreds);
     if(sum==num){
        printf("Number is Armstrong");
     }
     else{
        printf("Number is not Armstrong");
     }
     return 0;
 }
