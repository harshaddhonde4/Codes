/*
Write A Program which Returns difference Even and Odd Factorial of A Given Number
Example :   5
Output  :   -7  (8  -   15)
*/

#include<iostream>
using namespace std;

class FactorialDifference
{
    private:
        const int iNo;

    public:
        FactorialDifference(int iValue):iNo(iValue){};

        int Difference()
        {
            int iCnt = 0, iProductEven = 0, iProductOdd = 0, iDifference = 0;
            iProductOdd = iProductEven = 1;

            for(iCnt = iNo; iCnt >= 1; iCnt--)
            {
                if((iCnt % 2) == 1)
                {
                    iProductOdd *= iCnt;
                }
                else
                {
                    iProductEven *= iCnt;
                }       
                
            }
            iDifference = iProductEven - iProductOdd;
            return iDifference;
        }
};

int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Please, Enter the Number whose Difference between Even and Odd Factorial Product is to be Obatained :\n";
    cin>>iValue;

    if(iValue < 0)
    {
        iValue = -(iValue);
    }

    FactorialDifference Fobj(iValue);
    iRet = Fobj.Difference();

    cout<<"Difference is : "<<iRet<<endl;

    return 0;
}