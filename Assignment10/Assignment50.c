/*
Write A Program which Accepts A Range of Numbers from the user and displays the Numbers between the Range in Revrse Order:

Example   :

I/P :   5   10
O/P :   10   9   8   7   6   5

I/P :   10  5
O/P :   Invalid Input

*/

#include<stdio.h>

void RangeDisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range:(\n");
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Start Point :\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d", &iValue2);

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}