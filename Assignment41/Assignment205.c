/*
Write A Recursive Program which Displays Below Pattern
Example :
    I/P :   6
    O/P :   abcdef
*/

#include<stdio.h>

void Display(int iNo)
{   
    static char ch = 'a';
    if(ch < (97 + iNo))
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