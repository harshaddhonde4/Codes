/*
Write a program which accepts number from the user and return the count of even digits

Example :

I/P :   2395
O/P :   1

I/P :   1018
O/P :   2

I/P :   -1018
O/P :   2
*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit % 2) == 0)
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

    iRet = CountEvenDigits(iValue);

    printf("The Even Digits Count is :%d\n", iRet);

    return 0;
}