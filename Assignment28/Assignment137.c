/*
Write a Program which Accepts String from the user and converts it into the Upper Case
*/

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprX(String);    //strlwrX(String)

    printf("The Updated String is : %s\n", String);
    
    return 0;
}