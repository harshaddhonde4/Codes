/*
Accept 'N' numbers from the user and display numbers multiple of 11
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    //Accept total Number of Elements
    printf("Enter the Numbers of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory
    iptr = (int *)malloc(iLength * sizeof(int));
    if(iptr == NULL)
    {
        printf("Unable to Allocate the Memory \n");
        return -1;
    }
    //accept the Values
    printf("Enter the Values :\n");
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    //Use the Memory
    printf("The Numbers Mutiple of 11 are:\n");

    Display(iptr, iLength);
    
    //Deallocate the Memory
    free(iptr);

    return 0;
}   