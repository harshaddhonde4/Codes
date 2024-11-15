/*
Accept 'N' Numbers from the users and return difference between frequency of Even and Odd
Numbers. 
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iEvenFreq = 0, iOddFreq = 0, iDifference = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iOddFreq++;
        }
        else
        {
            iEvenFreq++;
        }

    }

    iDifference = iEvenFreq - iOddFreq;
    return iDifference;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    //Accept the No of Elements from the user
    printf("Enter the Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory \n");
        return -1;
    }

    //Accept the values from the users into the memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use the Memory(Logic)
    iRet = Difference(ptr, iLength);
    printf("The Difference between the Frequency of Even and odd element is : %d\n", iRet);

    //Deallocate the Memory
    free(ptr);

    return 0;
}