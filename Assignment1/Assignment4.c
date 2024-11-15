#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0

BOOL Check(int iNo)
{
    if(iNo%5 != 0)
    {
        return False;
    }

    else
    {
        return True;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Please, Enter the Number that is is check if it is Divisible by 5 or Not:\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == True)
    {
        printf("%d is Divisble by 5!\n", iValue);
    }

    else
    {
        printf("%d is Not Divisble by 5!\n", iValue);
    }

    return 0;
}