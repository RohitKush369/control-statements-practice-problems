#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character:");
    scanf("%C",&character);
    if((character>='a'&&character<='z')||(character>='A'&&character<='Z')){
            printf("character is an alphabet");
    }
    else
    printf("character is not an alphabet");
    return 0;
}
