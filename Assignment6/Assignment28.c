/*
Write A program to find Factorial of A given Number

Example :

I/P :   5
O/P :   120
*/

/*
Time Complexity : O(N)
*/
#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt > 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n", iValue, iRet);

    return 0;
}