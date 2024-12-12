/*
Write A Recursive Program which Displays Below Pattern
Example :
    I/P :   5
    O/P :   *   *   *   *   *
*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    if(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
        Display(iNo);
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