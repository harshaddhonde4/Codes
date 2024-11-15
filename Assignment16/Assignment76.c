/*
Accept 'N' Numbers from the user and return the largest Number
*/
#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;
    iMax = Arr[0];
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    //Enter the Number of Elements
    printf("Enter total Elements :\n");
    scanf("%d",&iLength);

    //Allocate the MEmory
    ptr = (int *)malloc(iLength * sizeof(int));

    //Accept the Values into the Allocated Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perform the operations
    iRet = Largest(ptr, iLength);
    printf("Largest element is :%d\n", iRet);

    return 0;
}
