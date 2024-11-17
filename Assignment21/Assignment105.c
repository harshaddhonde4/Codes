/*
Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 3    iCol = 4
Output  :   

        1   2   3   4   
        5   6   7   8
        9   10  11  12

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for( i = 0; i < iRow ; i++)
    {
        for( j = 1; j <= (iCol) ; j++)
        {
            printf("%d\t", (4*i)+j);
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