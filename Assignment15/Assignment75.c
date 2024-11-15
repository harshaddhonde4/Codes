/*
Accept 'N' Numbers from users and return the product of All odd Values
*/

#include<stdio.h>
#include<stdlib.h>

int ProductOdd(int Arr[], int iSize)
{
    int iCnt = 0, iMultiOdd = 1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {   
            iMultiOdd *= Arr[iCnt];
        }
    }
    if(iMultiOdd == 1)
    {
        iMultiOdd = 0;
    }
    return iMultiOdd;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept total Elements
    printf("Enter total Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Allocate the Memory\n");
        return -1;
    }
    //Accept the Values into the Allocated Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perform the Operations
    iRet = ProductOdd(ptr, iLength);
    printf("The Product of all Odd Values is : %d\n", iRet);

    //Deallocate the Allocated Memory
    free(ptr);

    return 0;
}