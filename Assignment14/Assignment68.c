/*
Accept 'N' numbers from the user and check wheather that Numbers contains 11 in it or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    //Accept the Number of elements
    printf("Enter the Number of Elements :\n");
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

    //Perform the operations
    bRet =  Check(ptr, iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    return 0;
}