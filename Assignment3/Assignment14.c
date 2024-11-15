/*
Take a Character input from the user and convert the case of that character
*/

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue == tolower(cValue))
    {
        cValue = toupper(cValue);
        printf("Result:%c\n", cValue);
    }

    else
    {
        cValue=tolower(cValue);
        printf("Result:%c\n", cValue);
    }
}

int main()
{
    char ch = '\0';
    printf("Enter the Character:\n");
    scanf("%c", &ch);

    DisplayConvert(ch);
    return 0;
}