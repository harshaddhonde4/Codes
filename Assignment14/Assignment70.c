/*
Accept 'N' Numbers from the user and a Number 'NO' and return its Frequency
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iLength = 0, iRet = 0, iValue = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept the Number of Elements
    printf("Enter the total Nummber of elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory \n");
        return -1;
    }
    //Accept the values into the memory

    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use that Memory
    printf("Please, Enter the Number whose frequency is to be Displayed : \n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iLength, iValue);
    printf("The Freqency of %d is : %d\n", iValue, iRet);

    //Deallocate the Memory
    free(ptr);
    return 0;
}