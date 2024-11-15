/*
Accept 'N' Numbers from user and display all such Elements which are divisible by 5
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d", &iLength);
    //Allocate the Memory
    iptr = (int *)malloc(iLength * sizeof(int));
    //Accept the Values
    printf("Enter the Values :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    //Perform the Operations
    printf("The Values which are divisble by 5 are :\n");
    Display(iptr, iLength);

    //Deallocate the Allocated Memory
    free(iptr);

    return 0;
}