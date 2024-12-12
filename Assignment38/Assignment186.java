/*
Write a Program which Accepts 'N' Number from the user and returns difference
between summations of Even Numbers and Odd Elements
*/

import java.util.*;

class Numbers
{
    public int Arr[];

    public Numbers(int iSize)
    {
       Arr = new int[iSize];
    }

    public void Accept()
    {   
        int iCnt = 0;
        System.out.println("Enter the values into the Array :");
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int Difference()
    {
        int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 1)
            {
                iSumOdd += Arr[iCnt];
            }
            else
            {
                iSumEven += Arr[iCnt];
            }
        }

        iDiff = iSumEven - iSumOdd;
        return iDiff;
    }
}

class Assignment186
{
    public static void main(String Arg[])
    {
        int iSize = 0, iRet = 0;
        System.out.println("Enter the Total Number of Elements :");
        Scanner sobj = new Scanner(System.in);
        iSize = sobj.nextInt();

        Numbers Nobj = new Numbers(iSize);
        Nobj.Accept();
        iRet = Nobj.Difference();
        System.out.println("The Difference between the Even and Odd Sumation of Number is :" + iRet);

    }
}