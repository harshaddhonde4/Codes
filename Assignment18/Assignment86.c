/*
Write A Program which Accepts Number from the user and displays Below Pattern
Example :   
Input   :   3
Output  :   *   *   *   #   #   #

Input   :   -3
Output  :   *   *   *   #   #   #
*/

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("*\t#\t");
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