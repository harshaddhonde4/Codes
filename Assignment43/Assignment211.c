/*
Write A Program which accept String From the User and Count WhiteSpaces
Example :   
    Input   :   HE llo WOr lD
    Output  :   3
*/

#include<stdio.h>

int countSpace(char *str)
{       
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        countSpace(str);
    }

    return iCount;
}

int main()
{   
    char Arr[30];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = countSpace(Arr);

    printf("WhiteSpaces = %d\n", iRet);

    return 0;
}