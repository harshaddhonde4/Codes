/*
Write A Program which accept number from the user and return Summation of its Digit's
Example :   
    Input   :   879
    Output  :   24
*/

#include<stdio.h>

int SummationDigits(int iNo)
{   
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;
        SummationDigits(iNo / 10);
    }

    return iSum;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = SummationDigits(iValue);
    
    printf("The Summation of Digits is : %d\n", iRet);

    return 0;
}