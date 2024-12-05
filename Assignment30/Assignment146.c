/*
Write A Program which Accepts an Charater from the User and checks wheather it is Alphabet or Not!
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z'  || ch >= 'a' && ch <= 'z')
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

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("%c is an Aplhabet\n", cValue);
    }
    else
    {
        printf("%c is not an Aplhabet\n", cValue);
    }

    return 0;
}