/*
Write A Program which checks wheather the 15th Bit is On or OFF
*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0X4000;
    int iResult = 0;
    iResult = iNo & iMask;

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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Value :\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"15th Bit for the Entered Digit is ON!\n";
    }
    else
    {
        cout<<"15th Bit for the Entered Digit is OFF!\n";
    }
    return 0;
}