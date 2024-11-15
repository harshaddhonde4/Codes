/*
Write a program which accepts number from the user and return Multiplication of All digits.

Example :

I/P :   2395
O/P :   270

I/P :   1018
O/P :   8

I/P :   -1018
O/P :   8

I/P :   9440
O/P :   144

*/

#include<stdio.h>

int DigitsMulti(int iNo)
{
    int iDigit = 0, iMulti = 0;
    iMulti = 1;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while( iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > 0)
        {
            iMulti = iMulti * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMulti;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = DigitsMulti(iValue);

    printf("The Multiplication of Digits is : %d\n", iRet);

    return 0;
}