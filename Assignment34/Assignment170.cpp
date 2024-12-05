/*
Write a Program which Accepts Number and TOGGLE first and Last Nibble
*/


#include<iostream>
using namespace std;

int ModifyBits(int iNo)
{
    long long  int iMask = 0;
    long long iResult = 0;
    iMask = 0XF000000F;
    iResult = iMask ^ iNo;
    return iResult;
}

int main()
{
    long long int iValue = 0;
    long long int iRet = 0;

    cout<<"Enter the Value :\n";
    cin>>iValue;

    iRet = ModifyBits(iValue);

   cout<<"The Modified Number is : "<<iRet<<endl;
    
    return 0;
}