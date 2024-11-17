/*
Accept the Number of Rows and column from the user and display below pattern    
Example :
Input   :   iRow = 5    iCol = 5
Output  :   

        1   2   3   4   5
        -1  -2  -3  -4  -5
        1   2   3   4   5
        -1  -2  -3  -4  -5
        1   2   3   4   5
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i=1;i <= iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i%2) == 0)
            {
                printf("-%d\t", j);
            }
            else
            {
                printf("%d\t", (j));
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