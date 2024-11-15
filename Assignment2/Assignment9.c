/*
Write a program which accepts two Numbers from the user and display First Number Second Number 
of times
*/

#include<stdio.h>

void display(int iNo, int iFreq)
{   
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{   
    int iValue = 0, iCount = 0;
    printf("Enter the Number which is to be displayed on the Screen:\n");
    scanf("%d", &iValue);

    printf("Enter the Number of times you want to display the Entered Number :\n");
    scanf("%d", &iCount);

    display(iValue, iCount);   
    return 0;
}