/*
Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 4    iCol = 4
Output  :   

        A   B   C   D
        a   b   c   d
        A   B   C   D
        a   b   c   d

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for( i = 1; i <= iRow; i++ )
    {   
        if((i % 2) == 1)
        {
            ch = 'A';
        }
        else
        {
            ch = 'a';
        }
        for( j = 1; j <= iCol; j++ )
        {   
            if((i % 2) == 1)
            {   
                printf("%c\t", ch);
            }
            else
            {    
                printf("%c\t", ch);
            }
            ch++;
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