/*
Accept 'N' Numbers from the user and accept one number 'No' and check wheather if No is present or Not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPresent(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, iValue = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    //Accept the Values from the user
    printf("Enter total Values :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to Allocate the Memory\n");
        return -1;
    }

    //Accept the Values into the Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //use the allocated Memory
    printf("Enter the Number which is to be checked if is present or Not :\n");
    scanf("%d", &iValue);

    bRet = isPresent(ptr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present\n", iValue);
    }
    else
    {
        printf("%d is not present\n", iValue);
    }

    //Deallocate the allocate dMemory
    free(ptr);

    return 0;
}