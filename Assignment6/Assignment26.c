/*
Write A Program Which Accepts Number From the User And if NUmber is Less than 50 then Prints Small if greater than 50 and less than 100 prints Medium if greater than 100 prints Large
Example :
I/P :   35
O/P :   Medium
*/

/*
Time Complexity : Can't be Calculate as there is No loop to Execute!
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
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