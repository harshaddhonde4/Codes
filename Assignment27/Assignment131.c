/*
Write a Program which accepts string from the user and count the number of capital letters
*/

#include<stdio.h>

int CountCapitalLet(char *ptr)
{
    int iCountCap = 0;
    while( *ptr != '\0')
    {
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            iCountCap++;
        }
        ptr++;
    }

    return iCountCap;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapitalLet(Arr);

    printf("The Number of Capital Letters in the String is : %d\n", iRet);

    return 0;
}