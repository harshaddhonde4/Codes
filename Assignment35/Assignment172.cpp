/*
Write A Program which Accepts Two Numbers From the User and Returns the Common ON Bit of that Numbers
*/

#include<iostream>
using namespace std;

void CountCommonBits(int iNo1, int iNo2)
{
    int iMask = 0X1, iCount = 0;
    int iCnt = 1;
    while(iCnt <= 32)
    {
        if(((iMask & iNo1) == iMask) && ((iMask & iNo2) == iMask))
        {
            cout<<iCnt<<"\t";
        }
        iMask = iMask << 1;
        iCnt++;
    }

    cout<<endl;
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter First Number :\n";
    cin>>iValue1;

    cout<<"Enter Second Number :\n";
    cin>>iValue2;

    CountCommonBits(iValue1, iValue2);

    return 0;
}