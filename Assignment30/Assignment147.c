/*
Write A Program which Accepts an Charater from the User and checks wheather it is Capital or Not!
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is an capital Aplhabet\n", cValue);
    }
    else
    {
        printf("%c is not an capital Aplhabet\n", cValue);
    }

    return 0;
}