/*
Write a Program which Accepts Number Value in KiloMeter from the User and converts it into meter

Example :
I/P :   5
O/P :   5000
*/

#include<stdio.h>

int KMtoMeter(int iKM)
{
    int iMeter = 0;

    iMeter = iKM * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Value in KiloMeter(KM) :\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%dKM = %dM", iValue, iRet);

    return 0;
}