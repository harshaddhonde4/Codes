/*
Write A Recursive Program to display below Output
O/P :   5   4   3   2   1
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 5;
    if(iCnt >= 1)    //Base case
    {
        printf("%d\t", iCnt);
        iCnt--;
        Display();  //Recurisive Call
        
    }

}

int main()
{
    Display();
    return 0;
}