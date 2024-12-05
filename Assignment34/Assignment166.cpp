/*
Write a Program which Accepts Number and Position from the User check wheather the bit is ON or OFF
If Bit is 1 Return True else Return False
*/

#include<iostream>
using namespace std;

bool CheckBits(int iNo, int iPos)
{
    int iMask = 1;
    iMask = iMask << (iPos - 1);
    int iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the Value :\n";
    cin>>iValue1;

    cout<<"Enter the Position :\n";
    cin>>iValue2;

    bRet = CheckBits(iValue1, iValue2);

    if(bRet == true)
    {
        cout<<"Bit is ON!\n";
    }    
    else
    {
        cout<<"Bit is OFF!\n";
    }

    return 0;
}