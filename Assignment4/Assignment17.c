/*
Write A program which Accepts Number from the User and Displays its Factors in an Decreasing Order
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int iFact[50];
    int iCnt = 0;
    int iIndex = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iFact[iIndex] = iCnt;
            iIndex++;
        }
    }

    int iLength = (sizeof(iFact))/(sizeof(iFact[0]));
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iFact[iCnt] > iFact[iCnt + 1])
        {
            iFact[iCnt], iFact[iCnt + 1] = iFact[iCnt + 1], iFact[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t", iFact[iCnt]);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}