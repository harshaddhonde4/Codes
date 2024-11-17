/*
Accept the Number from user and Display the Below Pattern
Example :
Input   :   8
Output  :   2   4   6   8   10  12  14  16
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if( iNo < 0 )
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= (iNo*2); iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
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