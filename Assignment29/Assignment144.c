/*
Write A Program which Accepts String from the user and accept one Characater & Returns its index of Last Occurence
*/

#include<stdio.h>

int LastIndexOcc(char *str, char ch)
{   
    int iCnt = 0, iIdx = 0;
    iIdx = -1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIdx = iCnt;
        }

        iCnt++;
        str++;
    }

    
    return iIdx;
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

    iRet = LastIndexOcc(String, cValue);

    printf("Last Index of Occurence is : %d\n", iRet);

    return 0;
}