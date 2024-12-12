/*
Write A Java Program which Accepts 'N' number from the User and another Number as
No, Check Wheather No is Present or Not!
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

    

    public boolean CheckWheather(int iKey)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt]) == iKey)
            {
                return true;
            }
        }

        return false;
    }
    
}

public class Assignment191 
{
    public static void main(String Arg[])
    {
        int iSize = 0, iKey = 0;
        boolean bRet = false;

        System.out.println("Enter the Size :");
        Scanner sobj = new Scanner(System.in);
        iSize = sobj.nextInt();

        Numbers Nobj = new Numbers(iSize);
        Nobj.Accept();

        System.out.println("Enter the Element which is to be Searched :");
        iKey = sobj.nextInt();
        
        bRet = Nobj.CheckWheather(iKey);
        if(bRet == true)
        {
            System.out.println("Key is Present in the Array:)");
        }
        else
        {
            System.out.println("Key is Not Present");
        }
    }
}
