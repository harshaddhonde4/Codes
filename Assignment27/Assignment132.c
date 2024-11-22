/*
Write a Program which accepts string from the user and count the number of capital letters
*/

#include<stdio.h>

int CountSmallLet(char *ptr)
{
    int iCountSmall = 0;
    while( *ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            iCountSmall++;
        }
        ptr++;
    }

    return iCountSmall;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSmallLet(Arr);

    printf("The Number of Small Letters in the String is : %d\n", iRet);

    return 0;
}