/*
Write A Program which accept number from the user and Displays below Pattern
Example :   
    Input   :   5
    Output  :   5   *   4   *   3   *   2   *   1   *
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t*\t", iNo);
        Display(iNo - 1);
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