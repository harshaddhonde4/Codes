/*
Write a Program which accepts number from user and calculate frequency of 4 in it

Example :

I/P :   2395
O/P :   0

I/P :   9440
O/P :   2

*/

#include<stdio.h>

int FourCount(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while( iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount += 1;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = FourCount(iValue);

    printf("Frequency of 4's is : %d\n", iRet);

    return 0;
}