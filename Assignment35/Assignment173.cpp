/*
Write A Program which Accepts Number from the User and Checks if the 9th and 12th Bit is ON or OFF
*/

#include<iostream>
using namespace std;

bool CheckBits(int iNo)
{
    int iMask1 = 0X100;
    int iMask2 = 0X800;

    if(((iMask1 & iNo) == iMask1) || ((iMask2 & iNo) == iMask2))
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

    bRet = CheckBits(iValue);
    if(bRet == true)
    {
        cout<<"Either one Bit or Both are ON!\n";
    }
    else
    {
        cout<<"Bits are OFF\n";
    }
    return 0;
}