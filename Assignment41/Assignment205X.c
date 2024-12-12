
/*
Write A Recursive Program which Displays Below Pattern
Example :
    I/P :   6
    O/P :   f   e   d   c   b   a
*/

#include<stdio.h>

void Display(int iNo)
{   
    if(iNo >= 1)
    {
        char ch = 'a' + (iNo - 1);
        printf("%c\t", ch);
        Display(iNo - 1);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}