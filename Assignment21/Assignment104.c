/*

Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 4    iCol = 5
Output  :   

        4   4   4   4   4
        3   3   3   3   3
        2   2   2   2   2
        1   1   1   1   1
        
*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for( i = iRow; i >= 1 ; i--)
    {
        for( j = 1; j <= iCol ; j++)
        {
            printf("%d\t", i);
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