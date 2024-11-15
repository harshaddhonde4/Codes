/*
Accept 'N' Numbers from user and display all such Elements which are divisible by 5 and Even
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 2) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    //Accept the Total No of Elements
    printf("Enter the Total Elements:\n");
    scanf("%d", &iLength);

    //Allocate the Memory dynamically
    iptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Values :\n");

    //Accept the values in that memory from the user
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    //Use the Memory
    printf("The Numbers Divisible by 5 & Even are :\n");
    Display(iptr, iLength);

    return 0;
}