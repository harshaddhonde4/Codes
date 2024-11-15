/*
Accept 'N' numbers from the user and return the frequency of 11 from it.
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iFreq = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        if((Arr[iCnt] == 11))
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept the Numbers
    printf("Enter total Numbers :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory \n");
        return -1;
    }
    
    //Accept the Values from the user
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perfrom the Operations
    iRet = Frequency(ptr, iLength);
    printf("Frequency of 11 is : %d\n", iRet);

    //Deallocate the Memory
    free(ptr);

    return 0;
}