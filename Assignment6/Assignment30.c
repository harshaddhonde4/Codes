/*
Write A program which Accepts number from the User and displays its Table in Reverse Order
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iMulti = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    printf("Table of %d is :\n", iValue);

    TableRev(iValue);

    return 0;
}