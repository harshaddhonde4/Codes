/*
Write A Program which Accepts Number from the User and return the count of Digits
between Numbers 3 & 7
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
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7) )
            {
                iCount++;
            }
            iNo = iNo / 10;
        }

        return iCount;
    }
}

class Assignment183
{
    public static void main(String Arg[])
    {
        int iValue = 0, iRet = 0;
        System.out.println("Enter the Number :");
        Scanner sobj = new Scanner(System.in);
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);
        iRet = dobj.oddCount();

        System.out.println("The Count of Digits Between 3 to 7 is : " + iRet);
    }
}