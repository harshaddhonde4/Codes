/*
Write A Program which Accepts String from the user and accept one Characater & Returns its Frequency
*/

#include<stdio.h>

int CountFreq(char *str, char ch)
{   
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", String);

    printf("Enter the Character which is to be checked if Present or Not :\n");
    scanf(" %c", &cValue);  //The gap before format Specifier terminates the Enter in input Buffer

    iRet = CountFreq(String, cValue);

    printf("The Frequency of Charcater %c in the String is : %d\n", cValue, iRet);

    return 0;
}