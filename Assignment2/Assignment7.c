//Accept one NUmber from the user and print that NUmber of time Star on the Screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;
    while(iCnt >= 1)
    {
        printf("*");
        iCnt--;
    }
}

int main()
{
    int iVal = 0;

    printf("Enter, the frequency:\n");
    scanf("%d", &iVal);

    Display(iVal);
    return 0;    
}