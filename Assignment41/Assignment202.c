/*
Write A Recursive Program which Displays Below Pattern
Example :
    I/P :   5
    O/P :   1   2   3   4   5
*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    if(iCnt <= iNo)
    {
        printf("%d\t", iCnt);
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