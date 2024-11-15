/*
Write A Program which Accepts Number from user and checks whather it Contains Zero or Not

Example :

I/P :   1018
O/P :   It contains Zero!

I/P :   2395
O/P :   There is no Zero
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while( iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero!\n");
    }
    else
    {
        printf("There is no Zero!\n");
    }

    return 0;
}