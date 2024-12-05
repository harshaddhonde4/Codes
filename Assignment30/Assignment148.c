/*
Write A Program which Accepts an Charater from the User and checks wheather it is Digit or Not!
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
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

    printf("Enter the Charcater :\n");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c is a Digit\n", cValue);
    }
    else
    {
        printf("%c is not a Digit\n", cValue);
    }

    return 0;
}