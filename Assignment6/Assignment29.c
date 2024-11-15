/*
Write A program which Accepts Number From the User and Displays its Table

Example :

I/P :   2
O/P :   2   4   6   8   10  12  14  16  18  20

*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMulti = iCnt * iNo;
        printf("%d\t", iMulti);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    printf("Table of %d is:\n", iValue);

    Table(iValue);

    return 0;
}