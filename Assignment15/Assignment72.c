/*
Accept 'N' Numbers from user & accept one number as 'NO' and return index of first occurence of No
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        if((Arr[iCnt]) == iNo)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int iLength = 0, iValue = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept the total Elements from the user
    printf("Enter total Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Allocate Memory\n");
        return -1;
    }
    //Accept the Values into the allocated memory
    printf("Enter the values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Perform the operations(Logic)
    printf("Enter the Number whose first occurence indexation is to be displayed :\n");
    scanf("%d", &iValue);
    iRet = FirstOcc(ptr, iLength, iValue);

    if(iRet == iLength)
    {
        printf("Not Present : -1");
    }
    else
    {
        printf("%d is present and its indexation of first occurence is : %d\n", iValue, iRet);
    }
    return 0;
}
