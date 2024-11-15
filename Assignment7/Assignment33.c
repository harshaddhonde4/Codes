/*
Write A Program To find Even Factorial Of a Number

Example :

I/P :   5
O/P :   8   (4*2)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iEvenFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return iEvenFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial Of %d is :%d", iValue, iRet);

    return 0;
}