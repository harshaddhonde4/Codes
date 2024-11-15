/*
Write A Program to find product of Even Factorials for an Input Number 'N'
Example :
Input   :   5
Output  :   8   (2*4)
*/

#include<stdio.h>

int ProductEvenFact(int iNo)
{
    int iCnt = 0, iProductEven = 0;
    iProductEven = 1;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iProductEven *= iCnt;
        }
    }
    return iProductEven;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Please, Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = ProductEvenFact(iValue);
    printf("Product of Even Factorial's is : %d\n", iRet);

    return 0;
}