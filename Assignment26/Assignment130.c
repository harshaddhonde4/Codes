/*
Accept a character from the user and check wheather it is special charcater or not
Example :
Input   :   !
Output  :   Special Character

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z') || ( ch >= '0' && ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
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
        printf("%c is a Special charcater\n", cValue);
    }
    else
    {
        printf("%c is not an Special Character\n", cValue);
    }
    return 0;
}