/*
Accept 'N' Numbers from the user and display summation of digits of each number
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        iNo = Arr[iCnt];
        iSum = 0;   //For Every iteration initalize iSum = 0
        /*
        We do not initalize iDigit with 0 or else we can but it is a temporary varibale and it does not get 
        initalized with any value as for every iterations its value is changing so after loop gets executed
        iDigit automatically sets to zero as it was initially
        */
        
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum += iDigit;
                iNo = iNo /10;
            }

            printf("%d\t", iSum);
    }
    
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    //Accept total Number of Elements
    printf("Enter total Number of Elements :\n");
    scanf("%d", &iLength);

    //Allocate the Memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));

    //Accept values into the allocated Memory
    printf("Enter the Values :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Use that Memory
    printf("The Summation of Digits of Each Elements is as Follows :\n");
    Display(ptr, iLength);

    //Deallocate the Allocated Memory
    free(ptr);

    return 0;
}