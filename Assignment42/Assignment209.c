/*
Write A Program which accept Number from the User and Returns its Factorial
Example :   
    Input   :   5
    Output  :   120
*/

#include<stdio.h>

int factorialR(int iNo)
{       
    static int iFact = 1;
    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
        factorialR(iNo);
    }

    return iFact;
    
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = factorialR(iValue);

    printf("Factorial = %d\n", iRet);

    return 0;
}