/*
Write A Program which Accepts Number from the User and return the Multiplication of
all Digits
Example :   1018
Output  :   8
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
        int iDigit = 0, iMulti = 0;
        iMulti = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit != 0)
            {
                iMulti *= iDigit;
            }
            iNo = iNo / 10;
        }

        return iMulti;
    }
}

class Assignment184
{
    public static void main(String Arg[])
    {
        int iValue = 0, iRet = 0;
        System.out.println("Enter the Number :");
        Scanner sobj = new Scanner(System.in);
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);
        iRet = dobj.oddCount();

        System.out.println("The Multiplication of Digits is : " + iRet);
    }
}