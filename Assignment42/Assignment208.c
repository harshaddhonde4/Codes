/*
Write A Program which accept String from the User and Count the number of Characters!
Example :   
    Input   :   Hello
    Output  :   5
*/

#include<stdio.h>

int strlen(char *str)
{       
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        CountChar(str);
    }

    return iCount;
}

int main()
{   
    int iRet = 0;
    char Arr[30];

    printf("Enter the String:\n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr);
    
    printf("The Count of Charcater in the String is : %d\n", iRet);

    return 0;
}