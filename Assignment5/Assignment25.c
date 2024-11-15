/*
Write A Program which Accepts A Number (N) from the USer and Prints First 5 Multiples of N
Example :
I/P :   5
O/P :   5   10  15  20  25
*/

/*
Time Complexity : O(N)
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d\t", iMulti);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}