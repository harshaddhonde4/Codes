/*
Write A Program which Accepts String from the user and accept one Characater & Returns its index of First Occurence
*/

#include<stdio.h>

int IndexOcc(char *str, char ch)
{   
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    iCnt = -1;
    return iCnt;
}

int main()
{
    char String[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    printf("Enter the Character which is to be checked if Present or Not :\n");
    scanf(" %c", &cValue);  //The gap before format Specifier terminates the Enter in input Buffer

    iRet = IndexOcc(String, cValue);

    printf("First Index of Occurence is : %d\n", iRet);

    return 0;
}