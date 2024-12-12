/*
Write A Program which accept Number from the User and Returns its Reverse Number
Example :   
    Input   :   523
    Output  :   325
*/

#include<stdio.h>

int reverseNo(int iNo)
{       
    static int iRev = 0;
    int iDigit = 0;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
        reverseNo(iNo);
    }
    
    return iRev;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = reverseNo(iValue);

    printf("Reverse Number = %d\n", iRet);

    return 0;
}