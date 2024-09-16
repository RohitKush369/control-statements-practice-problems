//Write a program that checks whether a given character is a vowel or consonant.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){  //aware about lowercase and uppercase
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){

        printf("Character is vowel");
    }
    else {
        printf("Character is consonant");
    }
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
    printf("Character is vowel");
    break;
default:
    printf("Character is consonant");
}
return 0;
}
