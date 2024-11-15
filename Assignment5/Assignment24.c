/*
Write A Program which Accepts Number (N) from the User and Prints All Odd Numbers upto to N
Example : 18
O/P :   1, 3, 5, 7, 9, 11, 13, 15, 17
*/

/*
Time Complexity :   O(N) [Time Required For the Execution of Loops]
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//Function Name : DisplayOddNumbers
//Description : Accepts a Number (N) and Displays all Odd Numbers Upto to N
//Input : -
//Output : void
//Author : Harshad Amol Dhonde (Employee Id : ABC)
//Created On : 30/10/2024
/////////////////////////////////////////////////////////////////

void  DisplayOddNumbers(int iNo)
{
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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

    DisplayOddNumbers(iValue);

    return 0;
}