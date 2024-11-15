/*
Write a program which Accepts one Number from the user and print that 
number of Even Numbers on the Screen:)
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo < 0)
    {
        return;
    }
    else
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= (2*iNo); iCnt++)
        {
            if(iCnt%2 == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the Count of Numbers you Want to Display: \n");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}