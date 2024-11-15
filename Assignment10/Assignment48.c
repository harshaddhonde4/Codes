/*
Write A Program which Accepts A Range of Numbers from the user and displays the Additon of  Numbers between the Range
(Range Should Contains Positive Numbers Only)
Example   :

I/P :   23  30
O/P :   212

I/P :   -10  5
O/P :   Invalid Range

*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    //Dont Accept the Input if -ve Inputs Are Provided
    int iCnt = 0, iSum = 0;

    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1;
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point :\n");
    scanf("%d", &iValue1);

    printf("Enter End Point :\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range:(\n");
    }
    else
    {
      printf("The Sum of Numbers Between Range is :%d\n", iRet);  
    }

    return 0;
}