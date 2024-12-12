#include<stdio.h>

int SummationDigits(int iNo)
{
    int iDigit = 0, iSum = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Value :\n");
    scanf("%d", &iValue);

    iRet = SummationDigits(iValue);

    printf("Summation of Digit's is :%d\n", iRet);
    return 0;
}