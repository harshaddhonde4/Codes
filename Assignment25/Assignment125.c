/*
Accept the Number of Rows and column from the user and display below pattern    
Example :
Input   :   iRow = 4    iCol = 4
Output  :   

        1   2   3   4   5
        1   2           5
        1       3       5
        1           4   5
        1   2   3   4   5
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j= 0;

    for(i = 1; i <= iRow; i++)
    {
        for( j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == j || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}