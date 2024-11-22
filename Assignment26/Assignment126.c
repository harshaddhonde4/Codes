/*
Accept a charcater from user and check wheather it is alphabet or not
Example :
Input   :   a
Output  :   is a charcater
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z') )
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

    printf("Please, Enter the charcater :\n");
    scanf("%c", &cValue);

    bRet = CheckChar(cValue);

    if(bRet == true)
    {
        printf("%c is an Alphabet\n", cValue);
    }
    else
    {
        printf("%c is not an Alphabet\n", cValue);
    }

    return 0;
}