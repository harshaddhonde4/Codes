/*
Write A Program which Accept a Number and turn on the 7th Bit of the Number if it is OFF, and returns the Modified Number
*/
#include<iostream>
using namespace std;

int ModifyNumber(int iNo)
{
    int iMask = ~(0X40);
    int iResult = iMask & iNo;
    return iResult;
}

int main()
{   
    int iValue = 0, iRet = 0;
    cout<<"Enter the Number:\n";
    cin>>iValue;

    iRet = ModifyNumber(iValue);

    if(iRet == iValue)
    {
        cout<<"The 7th Bit is OFF!\n";
    }
    else
    {
        cout<<"Modified Number is : "<<iRet<<endl;
    }

    return 0;
}