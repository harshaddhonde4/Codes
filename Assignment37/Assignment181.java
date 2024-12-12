/*
 Write A Program which Accepts Number from the User and return the Count of Even Digits
 */

import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int iVal)
    {
        iNo = iVal;
    }

    public int EvenCount()
    {
        int iDigit = 0, iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        
        return iCount;
    }
}

class Assignment181
{
    public static void main(String Arg[])
    {
        int iValue = 0, iRet = 0;
        System.out.println("Enter the Number :");
        Scanner sobj = new Scanner(System.in);
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);
        iRet = dobj.EvenCount();

        System.out.println("The Count of Even Digits in the Entered Number is : " + iRet);
    }
}