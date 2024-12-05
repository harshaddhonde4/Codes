/*
Write A Program which Accepts one Number from user and Range of Positions and Toggle Bits Between That Range

*/

#include<iostream>
using namespace std;

void ToggleBits(int iNo, int iStart, int iEnd)
{
    int iMask = 0;
    int iResult = 0;

    for(int iCnt = iStart ; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (0X1 << (iCnt - 1));
    }

    iResult = iNo ^ iMask;
    cout<<"Number after Modification is : "<<iResult<<endl;
}

int main()
{   
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue1;

    cout<<"Enter Starting Point :\n";
    cin>>iValue2;

    cout<<"Enter Ending Point :\n";
    cin>>iValue3;

    ToggleBits(iValue1, iValue2, iValue3);

    return 0;
}