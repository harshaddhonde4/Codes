/*
Accept a character from the user and check wheather it is digit or not
Example :
Input   :   1
Output  :   Is an Digit
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character :\n");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is a Digit\n", cValue);
    }
    else
    {
        printf("%c is not an Digit\n", cValue);
    }
    return 0;
}