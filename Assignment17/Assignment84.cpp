/*
Write A Program which accepts a Nuber 'N' From the user and print all the odd numbers upto 'N'
Example :
Input   :   8
Output  :   1   3   5   7
*/

#include<iostream>
using namespace std;

class OddNumbers
{
    private:
        int iNo;

    public:
        OddNumbers(int iValue)
        {
            iNo = iValue;
        }

        void DisplayOddNum() const
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if((iCnt % 2) == 1)
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Please, Enter the Number Upto which the Odd Numbers are to be Displayed :\n";
    cin>>iValue;

    cout<<"Odd Number upto "<<iValue<<" are :\n";
    OddNumbers onobj(iValue);
    onobj.DisplayOddNum();

    return 0;
}