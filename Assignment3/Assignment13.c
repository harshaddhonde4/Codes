/*
Write A program which Accepts a Number from the user and display Even Factors of that Number
This time dont print 1
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    if(iNo < 0) //Updator
    {
        iNo=-iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <=(iNo - 1); iCnt++)
    {
        if(iCnt%2 == 0 && iNo%iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Please, Enter the Number whose Even Factors is to be Obtained :\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);
    
    return 0;
}