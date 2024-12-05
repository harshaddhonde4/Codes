/*
Write a Program which Accepts Number from the User and turn OFF 7th And 10th Bit of that Number
*/
#include<iostream>
using namespace std;

int ModifyBits(int iNo)
{
    int iMask = 0, iResult = 0;
    iMask = ~(0X240);
    iResult = iMask & iNo;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the Value :\n";
    cin>>iValue;

    iRet = ModifyBits(iValue);

    if(iRet == iValue)
    {
        cout<<"7th And 10th Bits are Already OFF!\n";
    }
    else
    {
        cout<<"The Modified Number is : "<<iRet<<endl;
    }
    return 0;
}