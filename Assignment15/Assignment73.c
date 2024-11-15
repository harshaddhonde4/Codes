/*
Accept 'N' Numbers from the user and a Number 'No' and return last indexation of No
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iIdx = 0;
    iIdx = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iIdx = iCnt;
        }
    }   

    return iIdx;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;

    //Accept Total Number of Elements 
    printf("Enter total Elements :\n");
    scanf("%d", &iLength);

    //Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Allocate Memory\n");
        return -1;
    }
    //Accept the values into the allocated memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perform the Operations
    printf("Enter the Value whose last occurence indexation is to be obtained :\n");
    scanf("%d", &iValue);

    iRet = LastOcc(ptr, iLength, iValue);
    
    if(iRet == -1)
    {
        printf("Element is Not Present:( : -1\n");
    }
    else
    {
        printf("%d is present and its last indexation of occurence is : %d\n", iValue, iRet);
    }
}