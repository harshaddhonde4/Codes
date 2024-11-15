/*
Write a Program which accepts number from user and calculate frequency of numbers less than 6 in it

Example :

I/P :   2395
O/P :   3

I/P :   9440
O/P :   3

I/P :   96672
O/P :   1

*/

#include<stdio.h>

int CountFreq(int iNo)
{
    int iCount = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
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

    iRet = CountFreq(iValue);

    printf("The Frequency of Numbers Less than 6 is :%d\n", iRet);

    return 0;
}