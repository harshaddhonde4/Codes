/*
Accept a character from the user and check wheather it is capitial or not
Example :
Input   :   A
Output  :   Is an Capital Letter
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

    printf("Enter the Character :\n");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is a Capital Letter\n", cValue);
    }
    else
    {
        printf("%c is not an Capital Letter\n", cValue);
    }
    return 0;
}