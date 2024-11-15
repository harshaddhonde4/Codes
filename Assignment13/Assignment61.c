/*
Write A Program which Accepts 'N' Numbers from the userd return difference between summation of Even Elements and 
Summation of odd Elemets
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDifference = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 == 0)
        {
            iSumEven += Arr[iCnt];
        }
        else
        {
            iSumOdd += Arr[iCnt];
        }

    }

    iDifference = iSumEven - iSumOdd;
    return iDifference;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iptr = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d", &iLength);

    iptr = (int *)malloc(iLength * sizeof(int)); 

    printf("Enter the Values :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    iRet = Difference(iptr, iLength);

    printf("The difference between Summation fo Even and Odd Values is :%d\n", iRet);

    free(iptr);

    return 0;
}
