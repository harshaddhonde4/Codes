/*
Write A Recursive Program which accept Number from the User and Returns Smallest Digit
Example :   
    Input   :   87983
    Output  :   3
*/

#include<stdio.h>

int smallestDigit(int iNo)
{       
    int iDigit = 0;
    static int iSmall = 9;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iSmall > iDigit)
        {
            iSmall = iDigit;
        }
        iNo = iNo / 10;
        smallestDigit(iNo);
    }

    return iSmall;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = smallestDigit(iValue);

    printf("SmallestDigit = %d\n", iRet);

    return 0;
}