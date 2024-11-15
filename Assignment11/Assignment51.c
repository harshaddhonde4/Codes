/*
Write A Program Which accepts Number from the user and displays digit in Reverse Order

Example :

I/P :   2395
O/P :   5
        9
        3
        2
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}