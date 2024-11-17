/*
Write A  Program which is used to display below Pattern
Example :  
Input   :   5
OutPut  :   A   B   C   D   E  
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0) //Updator
    {
        iNo = -(iNo);
    }
    for(iCnt = 65; iCnt < (65 + iNo); iCnt++)
    {
        printf("%c\t", iCnt);
    }
}

int main()
{   
    int iValue = 0;
    printf("Please, Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}