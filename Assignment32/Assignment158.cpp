/*
Write A Program to Check Wheather 7th, 15th, 21th & 28th bit is ON or OFF
*/
#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0, iResult = 0;
    iMask = 0X8104040;
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
        cout<<"7th, 15th, 21th & 28th bit is ON!\n";
    }
    else
    {
        cout<<"7th, 15th, 21th & 28th bit is OFF!\n";
    }

    return 0;
}