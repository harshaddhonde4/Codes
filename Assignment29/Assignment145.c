/*
Write A Program which Accepts string from the user and reverses thar string
*/

#include<stdio.h>

void DisplayRev(char *str)
{
    char *End = NULL;
    End = str;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    printf("Reverse String :\n");
    while(End >= str)
    {
        printf("%c", *End);
        End--;
    }
    printf("\n");
}

int main()
{
    char String[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    DisplayRev(String); //Call By Address   ->  DisplayRev(100)

    return 0;
}