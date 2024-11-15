/*
Write A Program which Accepts Number from the User and Prints to that Number

Example :
I/P : 4
O/P :
1
2
3
4
*/

/*
Time Complexity : The time Required for the Execution of Loops is : O(N)

*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n", iCnt);
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
