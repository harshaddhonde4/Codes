//Program to print Numbers 5 to 1 on Screen using while loop

#include<stdio.h>

void Display()
{
    int iCnt = 0;   
    iCnt = 5;   //Loop Counter Initlisation

    while(iCnt >= 1)    //Loop Terminating Condition
    {
        printf("%d\n", iCnt);   //Loop Body
        iCnt--;                 //Loop Displacement using Counter
    }
}

int main()
{
    Display();
    return 0;
}