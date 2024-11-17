/*
Accept the Number of Rows and column from the user and display below pattern    
Example :
Input   :   iRow = 4    iCol = 4
Output  :   

        1   2   3   4
        5   6   7   8
        9   1   2   3
        4   5   6   7

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    int num = 0;
    num = 1;

    for( i = 1 ; i <= iRow; i++)
    {
        for( j = 1; j<=iCol;j++)
        {
            

            if(num > 9)
            {
                num = 1;
            }

            printf("%d\t", num);
            num++;
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