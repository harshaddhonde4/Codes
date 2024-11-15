/*
Accept 'N' numbers from the user and return difference between even number and odd Number
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0, iDifference = 0;
    iMin = iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    iDifference = iMax - iMin;
    return iDifference;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept total Elemets from the user
    printf("Enter the Total elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory\n");
        return -1;
    }
    //Accept the values into the Memory
    printf("Enter the Values :\n");
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use the Memory
    iRet = Difference(ptr, iLength);
    printf("The difference Between the Largest and Smallest Elements is : %d\n", iRet);

    //Deallocate the Allocated Memory
    free(ptr);

    return 0;
}