/*
Write A Program to Find Odd Factorial Of a given Number

Example :

I/P :   5
O/P :   15

I/P :   -5
O/P :   15

*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iOddFact = 1;
    int iCnt = 0;

    if(iNo < 0) //Updator
    {
        iNo = -(iNo);
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("The Odd Factorial for Entered Number is:%d\n", iRet);

    return 0;
}