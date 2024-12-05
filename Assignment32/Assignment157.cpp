/*
Write A Program to Check Wheather 5 & 18th bit is ON or OFF
*/
#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0, iResult = 0;
    iMask = 0X20010;
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
        cout<<"5th and 18th Bits are ON!\n";
    }
    else
    {
        cout<<"5th and 18th Bits are OFF!\n";
    }
    return 0;
}