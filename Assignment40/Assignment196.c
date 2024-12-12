/*
Write A Recursive Program to display below Output
O/P :   *   *   *   *   *
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 0;
    if(iCnt < 5)    //Base case
    {
        printf("*\t");
        iCnt++;
        Display();  //Recurisive Call
        
    }

}

int main()
{
    Display();
    return 0;
}