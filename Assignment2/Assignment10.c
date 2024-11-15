/*
Accept the Number from the user and check whaether it is odd or even using typedef for BOOL of
existing type integer
*/

#include<stdio.h>
typedef int BOOL;   //typedef: Keyword which is used to create an another name (alias ) of an existing type
#define True 1      //Macro: Gets Expanded by the pre-processor
#define False 0

BOOL Check(int iNo)
{
    if(iNo%2 == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = False;

    printf("Enter the Number which is to be checked if Even or Odd:\n");
    scanf("%d", &iValue);

    iRet = Check(iValue);

    if(iRet == True)
    {
        printf("The Entered Number %d is Even:)\n", iValue);
    }
    else
    {
        printf("The Entered Number %d is Odd:)\n", iValue);
    }
    
    return 0;
}