/*
Write A Program which Accepts String from the user and accept one Characater. Check wheather the Character
is present in the String or Not!
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char String[30];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    printf("Enter the Character which is to be checked if Present or Not :\n");
    scanf(" %c", &cValue);  //The gap before format Specifier terminates the Enter in input Buffer

    bRet = CheckChar(String, cValue);

    if(bRet == true)
    {
        printf("%c is Present in the String\n", cValue);
    }
    else
    {
        printf("%c is not Present in the String\n", cValue);
    }

    return 0;
}