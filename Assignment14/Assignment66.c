/*
Accept 'N' numbers from the user and return frequency of Even numbers
*/

#include<stdio.h>
#include<stdlib.h>

int FreqEven(int Arr[], int iSize)
{
    int iEvenCount = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++;
        }
    }

    return iEvenCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    //Accept the Total Numbers
    printf("Enter the Total Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory \n");
        return -1;
    }
    
    //Insert values into the Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use the Memory
    iRet = FreqEven(ptr, iLength);
    printf("Frequency of Even Values is : %d\n", iRet);

    //Deallocate the Memory
    free(ptr);

    return 0;
}