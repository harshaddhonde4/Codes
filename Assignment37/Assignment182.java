package Assignment37;
/*
Write A Program which Accepts Number from the User and return the count of 
Odd Digits
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
            if((iDigit % 2) == 1)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }

        return iCount;
    }
}

class Assignment182
{
    public static void main(String Arg[])
    {
        int iValue = 0, iRet = 0;
        System.out.println("Enter the Number :");
        Scanner sobj = new Scanner(System.in);
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);
        iRet = dobj.oddCount();

        System.out.println("The Count of Odd Digit's is : " + iRet);
    }
}