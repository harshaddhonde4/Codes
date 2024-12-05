#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    long int iMask = 0, iResult = 0;
    iMask = 0x80000001; // Mask to check the 0th and 31st bits
    iResult = iNo & iMask;

    // If both 0th and 31st bits are ON
    return (iResult == iMask); 
}

int main()
{   
    long int iValue = 0;
    bool bRet = false;

    cout << "Enter the Value: ";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet)
    {
        cout << "First(0th) & Last(31st) Bit is ON!\n";
    }
    else
    {
        cout << "First(0th) & Last(31st) Bit is OFF!\n";
    }

    return 0;
}
