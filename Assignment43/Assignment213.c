/*
Write A Program which accept String From the User and return Count of Small Characters!
Example :   
    Input   :   HEllo WOrlD
    Output  :   5
*/

#include<stdio.h>

int countSmallChar(char *str)
{       
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        countSmallChar(str);
    }

    return iCount;
}

int main()
{   
    char Arr[30];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = countSmallChar(Arr);

    printf("Count of Small Charcater's = %d\n", iRet);

    return 0;
}