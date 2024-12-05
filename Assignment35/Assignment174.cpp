/*
Write A Program Which Accepts One Number and Two Positions from the User and check if bits at those Positions
are ON or OFF
*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo, int iPosition1, int iPosition2)
{   
    if(iPosition1 > 32 || iPosition2 > 32)
    {
        cout<<"Enter Valid Positions\n";
        return -1;
    }

    int iMask1 = 0X1, iMask2 = 0X1;
    iMask1 = iMask1 << (iPosition1 - 1);
    iMask2 = iMask2 << (iPosition2 - 1);

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
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    bool bRet = false;

    cout<<"Enter the Value :\n";
    cin>>iValue1;

    cout<<"Enter First Position :\n";
    cin>>iValue2;

    cout<<"Enter Second Position :\n";
    cin>>iValue3;

    bRet = CheckBit(iValue1, iValue2, iValue3);
    if(bRet == true)
    {
        cout<<"Either one or both Bits are ON!\n";
    }
    else
    {
        cout<<"Bits are OFF\n";
    }

    return 0;
}