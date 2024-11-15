/*
Write A program which returns difference between even and odd factorial of a given Number

Example :

I/P :5
O/P :(8-15) ->  -7

I/P :-5
O/P :(8-15) ->  -7

*/

#include<stdio.h>

int FactDifference(int iNo)
{
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    iEven = 1, iOdd = 1;

    for(iCnt =iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;


}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = FactDifference(iValue);

    printf("The Factorial Difference is:%d\n", iRet);

    return 0;
}