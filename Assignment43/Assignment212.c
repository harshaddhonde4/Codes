/*
Write A Recursive Program which accept Number from the User and Returns Largest Digit
Example :   
    Input   :   87983
    Output  :   9
*/

#include<stdio.h>

int largestDigit(int iNo)
{       
    int iDigit = 0;
    static int iLarge = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iLarge < iDigit)
        {
            iLarge = iDigit;
        }
        iNo = iNo / 10;
        largestDigit(iNo);
    }

    return iLarge;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = largestDigit(iValue);

    printf("LargestDigit = %d\n", iRet);

    return 0;
}