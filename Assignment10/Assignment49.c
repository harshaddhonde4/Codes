/*
Write A Program which Accepts A Range of Numbers from the user and displays the Additon of Even Numbers between the Range
(Range Should Contains Positive Numbers Only)
Example   :

I/P :   23  30
O/P :   108

I/P :   -10  5
O/P :   Invalid Range

*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iEvenSum = 0;

    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }
    else
    
    { 
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenSum += iCnt;
        }
    }
    
    }
    return iEvenSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point :\n");
    scanf("%d", &iValue1);

    printf("Enter End Point :\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input :(");
    }
    else
    {
        printf("The Summation of Even Numbers Between Range is :%d\n", iRet);
    }

    return 0;
}