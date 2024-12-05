/*
Write a Program which Accepts String from the user and converts it into the Lower Case
*/

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char String[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    strlwrX(String);    //strlwrX(String)

    printf("The Updated String is : %s\n", String);
    
    return 0;
}