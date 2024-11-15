/*
Write A Program which Accepts Amount in US Dollar From the User and Returns its Corresponding Value in Indian Currency:
Consider 1$ = 70RS

Example :
I/P :   10
O/P :   700
*/

#include<stdio.h>

int DollarToINR(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    int iINR = 0;
    int iDollar = 70;

    iINR = iDollar * iNo;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Amount in Dollar($) :\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("%d$ in INR is Equivalent to : %dRs", iValue, iRet);
}