/*
Write A Program which Accepts a Number from the user and Count the ON Bits and return them
without Using % and Modulo Operator
*/

#include<iostream>
using namespace std;

int CountOnBits(int iNo)
{
    int iMask = 0X1, iResult = 0;
    int iCnt = 0, iCount = 0;

    while(iCnt < 32)
    {   
        iResult = iMask & iNo;
        if(iResult == iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;
        iCnt++;
    }

    return iCount;
}

int main()
{   
    int iValue = 0, iRet = 0;
    cout<<"Enter the Number :\n";
    cin>>iValue;

    iRet = CountOnBits(iValue);

    cout<<"The Total Number of ON bits in the Entered Number is : "<<iRet<<endl;

    return 0;
}