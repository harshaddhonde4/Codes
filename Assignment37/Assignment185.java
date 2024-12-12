/*
Write A Program which Accepts Number from the User and return the Difference between
Summation of Even Digits and Odd Digits
Example :   1018
Output  :   6
*/

import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int iVal)
    {
        iNo = iVal;
    }

    public int oddCount()
    {
        int iDigit = 0, iEvenSum = 0, iDiff = 0, iOddSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iEvenSum += iDigit;
            }
            else
            {
                iOddSum += iDigit;
            }
            iNo = iNo / 10;
        }

        iDiff = iEvenSum - iOddSum;
        return iDiff;
    }
}

class Assignment185
{
    public static void main(String Arg[])
    {
        int iValue = 0, iRet = 0;
        System.out.println("Enter the Number :");
        Scanner sobj = new Scanner(System.in);
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);
        iRet = dobj.oddCount();

        System.out.println("The Difference of Even and odd Summation of Digits is : " + iRet);
    }
}