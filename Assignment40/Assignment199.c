/*
Write A Recursive Program to display below Output
O/P :   A   B   C   D   E   F
*/

#include<stdio.h>

void Display()
{
    static char ch = 'A';
    if(ch <= 'F')    //Base case
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