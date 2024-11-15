/*
Write a program which accepts number from the user and returns the difference between
summation of Even Digits and odd Digits

Example :

I/P :   2395
O/P :   -15

I/P :   1018
O/P :   6

I/P :   -1018
O/P :   2

I/P :   5773
O/P :   -18
*/

#include<stdio.h>

int SumDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit % 2) == 0 )
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = SumDiff(iValue);

    printf("The Difference between summation of even and odd digits is : %d\n", iRet);

    return 0;
}