/*
Write A Recursive Program to display below Output
O/P :   1   2   3   4   5
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 1;
    if(iCnt <= 5)    //Base case
    {
        printf("%d\t", iCnt);
        iCnt++;
        Display();  //Recurisive Call
        
    }

}

int main()
{
    Display();
    return 0;
}