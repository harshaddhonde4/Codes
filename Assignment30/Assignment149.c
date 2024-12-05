/*
Write A Program which Accepts an Charater from the User and checks wheather it is Small Case or Not!
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("%c is an Small Aplhabet\n", cValue);
    }
    else
    {
        printf("%c is not an Small Aplhabet\n", cValue);
    }

    return 0;
}