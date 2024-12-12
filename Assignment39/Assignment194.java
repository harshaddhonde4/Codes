/*
Write A Java Program which Accepts 'N' number from the User and and Range and Displays
Numbers Between that Range
*/

import java.util.*;

class Number
{   
    public int Arr[];

    public Number(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {   
        int iCnt = 0;
        System.out.println("Enter the Number into the Array :");
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display(int iStart, int iEnd)
    {
        int iCnt = 0;
        System.out.println("The Numbers Between the Given Range are :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {   
            if((Arr[iCnt] > iStart && Arr[iCnt] < iEnd))
            {
                System.out.println(Arr[iCnt] + "\t");
            }
            
        }
    }
 
}

public class Assignment194
{
    public static void main(String Arg[])
    {
        int iSize = 0, iStart = 0, iEnd = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size :");
        iSize = sobj.nextInt();

        System.out.println("Enter the Start :");
        iStart = sobj.nextInt();

        System.out.println("Enter the End : ");
        iEnd = sobj.nextInt();
        
        Number Nobj = new Number(iSize);
        Nobj.Accept();
        Nobj.Display(iStart, iEnd);
       
    }
}
