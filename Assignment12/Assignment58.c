/*
Write a program which accepts number from the user and return the count of digits between 3 & 7

Example :

I/P :   2395
O/P :   1

I/P :   1018
O/P :   0

I/P :   -1018
O/P :   2

I/P :   9922
O/P :   0
*/

#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( iDigit > 3 && iDigit < 7)
        {
            iCount += 1;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("The Digit Count for Digits between 3 to 7 is :%d\n", iRet);

    return 0;
}