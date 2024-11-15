/*
Accept 'N' numbers from the user and Display 3 Digit Numbers
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept the total Elements

    printf("Enter total Number of elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory dyamically

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Aloocate the Memory\n");
        return -1;
    }
    //Accept the values into that allocated memory

    printf("Enter the Values\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //use the allocated memory
    printf("Three Digits Values are :\n");
    Display(ptr, iLength);

    //Deallocate the Allocated Memory
    free(ptr);

    return 0;
}