/*
Write a Program which Accepts Number from the User and Prints the Number Line
Example : 
I/P :   4
O/P :   -4  -3  -2  -1  0   1   2   3   4
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}