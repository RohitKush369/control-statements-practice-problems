//Write a program that takes a single character as input and checks whether it is uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){//for lowercase
        printf("Lowercase character");
    }
    else if(ch>='A'&&ch<='Z'){//for uppercase
        printf("Uppercase character");
    }
    return 0;
}
