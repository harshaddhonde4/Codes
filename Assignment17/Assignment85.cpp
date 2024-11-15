/*
Write a Program which Accepts 'N' and prints first Five Multiples of 'N'
Example :
Input   :   5
Output  :   5   10  15  20  25  
*/

#include<iostream>
using namespace std;

class Multiples
{
    private:
        const int iNo;

    public:
        Multiples(int iValue):iNo(iValue){};

        void Display() const
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= 5;iCnt++)
            {
                cout<<iCnt*iNo<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;
    cout<<"Please, Enter the Number whose first 5 Multiples is to be Obtained :\n";
    cin>>iValue;

    if(iValue < 0)
    {
        iValue = -(iValue);
    }

    cout<<"First Five Multiples of "<<iValue<<" are :\n";

    Multiples mobj(iValue);
    mobj.Display();

    return 0;   
}