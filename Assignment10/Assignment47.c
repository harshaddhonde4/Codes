/*
Write A Program which Accepts A Range of Numbers from the user and displays the Even Numbers between the Range

Example   :

I/P :   5   10
O/P :   6   8   10

I/P :   10  5
O/P :   Invalid Input

*/

#include<stdio.h>

void DisplayEvenNumbers(int iStart, int iEnd)
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
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Start Point :\n");
    scanf("%d", &iValue1);

    printf("Enter End Point :\n");
    scanf("%d", &iValue2);

    DisplayEvenNumbers(iValue1, iValue2);

    return 0;
}