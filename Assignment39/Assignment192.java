/*
Write A Java Program which Accepts 'N' number from the User and another Number as
No, return index of First occurence of that No 
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

    

    public int returnIdx(int iKey)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt]) == iKey)
            {
                return iCnt;
            }
        }

        return -1;
    }
    
}

public class Assignment192
{
    public static void main(String Arg[])
    {
        int iSize = 0, iRet = 0, iKey = 0;

        System.out.println("Enter the Size :");
        Scanner sobj = new Scanner(System.in);
        iSize = sobj.nextInt();

        Numbers Nobj = new Numbers(iSize);
        Nobj.Accept();

        System.out.println("Enter the Element which is to be Searched :");
        iKey = sobj.nextInt();

        iRet = Nobj.returnIdx(iKey);
        if(iRet != -1)
        {
            System.out.println("The Indexation of First Occurence of Element is : " + iRet);
        }
        else
        {
            System.out.println("Element is Not Present!");
        }
       
    }
}
