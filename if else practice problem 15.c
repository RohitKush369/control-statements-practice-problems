//Write a program that takes a percentage score and prints the corresponding grade based on the following rules:
//90 and above: A
//80–89: B
//70–79: C
//60–69: D
//Below 60: F
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=90){
        printf("You obtained grade A");
    }
    else if(marks>=80&&marks<=89){
        printf("You obtained grade B");
    }
    else if(marks>=70&&marks<=79){
        printf("You obtained grade C");
    }
    else if(marks>=60&&marks<=69){
        printf("You obtained grade D");
    }
    else if (marks<60){
        printf("You obtained grade F");
    }
}
