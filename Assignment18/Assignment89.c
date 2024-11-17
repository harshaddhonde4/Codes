/*
Write A Program which returns the Product of Odd factorials of an Input Number 'N'
*/

#include<stdio.h>

int ProductOddFact(int iNo)
{
    int iCnt = 0, iProductOddFact = 1;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {   
        if((iCnt % 2) == 1)
        {
            iProductOddFact *= iCnt;
        }
        
    }

    return iProductOddFact;
}

int main()
{   
    int iValue = 0, iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = ProductOddFact(iValue);
    printf("Product of Odd Factorial of %d is : %d\n",iValue, iRet);

    return 0;
}