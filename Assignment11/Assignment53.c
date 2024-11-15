/*
Write a program which accepts number from user and calculate frequency of 2's in it.

Example :

I/P :   2395
O/P :   1

I/P :   9000
O/P :   0
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount += 1;
        }
        iNo = iNo /10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2's is :%d\n", iRet);

    return 0;
}