/*
Write A Program that Accepts a Number from the User and print that Numbers of * & $ on Screen

Example :

I/P :   5
O/P :   $   *   $   *   $   *   $   *   $   *

I/P :   -3
O/P :   $   *   $   *   $   * 
*/

#include<stdio.h>

void PatternPrint(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    PatternPrint(iValue);

    return 0;
}