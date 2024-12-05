/*
Write a Program which Accepts String from the user displays the digits only
*/

#include<stdio.h>

void DisplayDigits(char *str)
{   
    printf("Digits Present in the String are :\n");

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c\t", *str);
        }

        str++;
    }
}

int main()
{
    char String[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    DisplayDigits(String);    

    
    return 0;
}