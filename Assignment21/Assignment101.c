/*
Accepts numbers of rows and Columns from the user and display below Pattern :
Example :
Input   :   iRows = 4    iCol = 4
Output  :   

        A   B   C   D
        A   B   C   D
        A   B   C   D
        A   B   C   D

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    
    for(i = 1 ; i <= iRow ; i++)
    {
        for( j = 1, ch = 'A'; j <= iCol ; j++)
        {
            printf("%c\t", ch);
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