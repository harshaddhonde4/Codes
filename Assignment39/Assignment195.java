/*
Write A Java Program which Accepts 'N' number and return Product of All Odd Numbers
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
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Values into the Array :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    

    public int productOdd()
    {
        int iCnt = 0, iMultiOdd = 0;
        iMultiOdd = 1;
        for(iCnt = (Arr.length - 1); iCnt >= 0; iCnt--)
        {
            if((Arr[iCnt] % 2) == 1)
            {
                iMultiOdd *= Arr[iCnt];
            }
        }

        return iMultiOdd;
    }
    
}

public class Assignment195
{
    public static void main(String Arg[])
    {
        int iSize = 0, iRet = 0;

        System.out.println("Enter the Size :");
        Scanner sobj = new Scanner(System.in);
        iSize = sobj.nextInt();

        Numbers Nobj = new Numbers(iSize);
        Nobj.Accept();

        iRet = Nobj.productOdd();

        System.out.println("The Product of Odd Elements is : " + iRet);
    }
}
