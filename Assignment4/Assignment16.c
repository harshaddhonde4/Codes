/*
Write a Program which Number from User and Display Multiplication of it's Factor's
*/
/*
Time Complexity : O(N/2)
*/
#include<stdio.h>

//////////////////////////////////////////////////////////////
//Function Name : DisplayFactorsMultiplication
//Description : Returns the Multiplication of Factors an Entered Number
//Input : Integer
//Output : Interger
//Author : Harshad Amol Dhonde ( Employee Id : xxx )
//Created On : 28/10/2024
//////////////////////////////////////////////////////////////

int DisplayFactorsMultiplication(int iNo)
{
    int iMulti = 0;
    int iCnt = 0;

    iMulti = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if( (iNo % iCnt) == 0 )
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = DisplayFactorsMultiplication(iValue);

    printf("The Multiplication of Factors for Entered Number is :%d\n", iRet);

    return 0;
}