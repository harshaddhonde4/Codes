/*
Write A Program to Check Wheather 7th, 8th & 9th bit is ON or OFF
*/
#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0, iResult = 0;
    iMask = 0X1C0;
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
        cout<<"7th, 8th and 9th bit is ON!\n";
    }
    else
    {
        cout<<"7th, 8th & 9th bit is OFF!\n";
    }

    return 0;
}