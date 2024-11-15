/*
Accept 'N' Numbers from the user and returns the Minimum number amongst them
*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iMin = 0, iCnt = 0;
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    //Accept total Elements
    printf("Enter total Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Allocate the Memory");
        return -1;
    }
    //Accept the values into the Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perform the Operations
    iRet = Minimum(ptr, iLength);
    printf("Minimum Value is : %d\n", iRet);

    //Deallocate the Allocated Memory
    free(ptr);

    return 0;
}