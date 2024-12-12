/*
Write A Recursive Program to display below Output
O/P :   a   b   c   d   e   f
*/

#include<stdio.h>

void Display()
{
    static char ch = 'a';
    if(ch <= 'f')    //Base case
    {
        printf("%c\t", ch);
        ch++;
        Display();  //Recurisive Call
        
    }

}

int main()
{
    Display();
    return 0;
}