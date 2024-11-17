/*
Accept the Amount in US Dollar and return it's Value in INR (Consider 1 Dollar = 70 INR)
Example :  
Input   :   3
Output  :   270
*/

#include<stdio.h>

int DollarToINR(int iValue)
{
    int iINR = 0;
    iINR = iValue * 70;
    return iINR;
}

int main()
{
    int iDollar = 0, iRet = 0;
    printf("Please, Enter the Amount in Dollar which is to be Converted into INR :\n");
    scanf("%d", &iDollar);

    iRet = DollarToINR(iDollar);

    printf("%d Dollar = %d RS", iDollar, iRet);

    return 0;
}