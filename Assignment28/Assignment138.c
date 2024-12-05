/*
Write a Program which Accepts String and print the toggle ones
*/

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char String[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    strtoggleX(String);    //strlwrX(String)

    printf("The Updated String is : %s\n", String);
    
    return 0;
}