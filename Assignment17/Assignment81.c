/*
Write A Program which accepts a Number from the user and prints that Numeber of $ & * 
Input   :   3
Output  :   $   *   $   *   $   *
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number for the time you want to display the Pattern :\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}