/*
Write A Program which accept Number from the User and Returns Product of its Digit's
Example :   
    Input   :   523
    Output  :   30
*/

#include<stdio.h>

int productDigits(int iNo)
{       
    static int iMulti = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti *= iDigit;
        }
        iNo = iNo / 10;
        productDigits(iNo);
    }

    return iMulti;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = productDigits(iValue);

    printf("Product of Digit's is : %d\n", iRet);

    return 0;
}