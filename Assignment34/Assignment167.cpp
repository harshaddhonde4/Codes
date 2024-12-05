/*
Write a Program which Accepts Number and Position from the User and OFF that Bit
*/

#include<iostream>
using namespace std;

int ModifyBit(int iNo, int iPos)
{
   int iMask = 0X1;
   iMask = ~(iMask << (iPos-1));
   int iResult = iNo & iMask;
   return iResult;

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter the Value :\n";
    cin>>iValue1;

    cout<<"Enter the Position :\n";
    cin>>iValue2;

    iRet = ModifyBit(iValue1, iValue2);

    cout<<"Modified Value is : "<<iRet<<endl;

    return 0;
}