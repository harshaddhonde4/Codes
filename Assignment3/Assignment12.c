/*
Write A program which Accepts a Number from the user and display Even Factors of that Number
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo<0)   //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo-1; iCnt++)
    {
        if(iCnt == 1)
        {
            printf("%d\t", iCnt);
        }
        
        else if(iCnt%2 == 0 && iNo%iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number whose even Factors is to be Obtained:\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}