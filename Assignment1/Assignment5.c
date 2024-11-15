//Aceept A NUmber from User and print the same Numbers of times Starts on the Screen

#include<stdio.h>

void Display(int iValue)
{   
    int iCnt = 0;   //Loop Counter
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iNo = 0;

    printf("Please, Enter the Total Number of times you Want to print the Stars:\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}