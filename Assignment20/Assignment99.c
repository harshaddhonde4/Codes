/*
Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 3    iCol = 4
Output  :   

        *   #   *   #
        *   #   *   #
        *   #   *   #

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for( j = 1; j <= iCol; j++)
        {
            if((j % 2) == 1)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
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