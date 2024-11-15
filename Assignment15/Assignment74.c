/*
Accept 'N' Numbers from user and accept range from user and display Numbers between that Range
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) > iStart && (Arr[iCnt]) < iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    } 
}
int main()
{
    int iLength = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *ptr = NULL;

    //Accept the Total Length 
    printf("Enter total Number of Elements: \n");
    scanf("%d", &iLength);

    //Allocate the Memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Uable to Allocate Memory\n");
        return -1;
    }
    //Accept the Values and store it into the allocated memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use the Memory
    printf("Enter the Range :\n");
    printf("Enter the Starting Point :\n");
    scanf("%d", &iStart);
    printf("Enter the Ending Point :\n");
    scanf("%d", &iEnd);

    Display(ptr, iLength, iStart, iEnd);

    //Deallocate the Memory
    free(ptr);

    return 0;
}