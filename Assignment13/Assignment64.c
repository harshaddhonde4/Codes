/*
Accept 'N' Numbers from user and display all such Elements which are divisible by 5 and 3
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    //Accept total Element
    printf("Enter the Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory Dynamically
    iptr = (int *)malloc(iLength * sizeof(int));

    //Accept the values into the memory
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    printf("Numbers divisible by 3 & 5 are :\n");
    Display(iptr, iLength);

    free(iptr);

    return 0;

}