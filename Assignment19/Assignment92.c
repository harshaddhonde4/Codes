/*
Write A Program Which Accepts the number and Displays the Below Pattern
Example :   
Input   :   3
Output  :   3   #   2   #   1   #
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) //Updator
    {
        iNo = -(iNo);
    }
    for(iCnt = iNo ; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
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