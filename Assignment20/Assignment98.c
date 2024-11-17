/*
Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 3    iCol = 5
Output  :   

        5   4   3   2   1
        5   4   3   2   1
        5   4   3   2   1

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)  //Outer Loop (Row)
    {
        for( j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}