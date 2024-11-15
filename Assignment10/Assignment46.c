/*
Write A Program which Accepts A Range of Numbers from the user and displays the Numbers between the Range

Example   :

I/P :   5   10
O/P :   5   6   7   8   9   10

I/P :   10  5
O/P :   Invalid Input

*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
    else
    {

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point :\n");
    scanf("%d", &iValue1);

    printf("Enter End Point :\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);
    
    return 0;
}