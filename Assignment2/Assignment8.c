/*
Accept the Number from the user if the Number is less than 10 then print Hello
else print Demo
*/

#include<stdio.h>

void Display(int iNo)
{
    if( iNo < 10 )
    {
        printf("Hello\n");
    }

    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iVal = 0;
    printf("Please, Enter the Number :\n");
    scanf("%d", &iVal);

    Display(iVal);
    return 0;
}