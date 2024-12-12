/*
Write A Recursive Program which Displays Below Pattern
Example :
    I/P :   6
    O/P :   A   B   C   D   E   F
*/

#include<stdio.h>

void Display(int iNo)
{   
    static char ch = 'A';
    if(ch < (65 + iNo))
    {
        printf("%c\t", ch);
        ch++;
        Display(iNo);
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