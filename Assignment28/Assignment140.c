/*
Write a Program which Accepts String from the user & count number of WhiteSpaces!
*/

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(*str == ' ') //WhiteSpace is a Character with ASCII value 32
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char String[30];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    iRet = CountWhiteSpaces(String);    

    printf("Count of Whitespaces in the Entered String is : %d\n", iRet );
    
    return 0;
}