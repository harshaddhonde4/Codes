/*
Write a Program which Accepts 'N' Number from the user and returns the Numbers
which are Divisible by 5 and are Even!
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

        System.out.println("Enter the Values into the Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt ++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Divisibleby5()  
    {
        int iCnt = 0;
        System.out.println("The Numbers Divisible by 5 and Even are :");
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 2) == 0)
            {
                System.out.println(Arr[iCnt] + "\t");
            }
        }
    }
}
public class Assignment190
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        System.out.println("Enter the Number of Elements :");
        Scanner sobj = new Scanner(System.in);
        iSize = sobj.nextInt();

        Numbers Nobj = new Numbers(iSize);
        Nobj.Accept();
        Nobj.Divisibleby5();
    }
}