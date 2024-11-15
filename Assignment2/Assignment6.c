//Accept a Number from the user and print that Number of Times Stars on the Screen using while loop
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Please, Enter the Frequency:\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
