/*

Write A Program which Accepts NUmber from the User and Prints its Number Line
Example :
Input   :   3
Output  :   -3  -2  -1  0   1   2   3

*/

#include<iostream>
using namespace std;

class NumberLine
{
    private:
        int iNo;

    public:
        
        NumberLine(int iValue)
        {
            iNo = iValue;
        }

        void DisplayNumLine()
        {
            int iCnt = 0;
            for(iCnt = (-iNo); iCnt <= iNo; iCnt++)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Please, Enter the Number :\n";
    cin>>iValue;
    if(iValue < 0)
    {
        iValue = -(iValue);
    }

    NumberLine NLobj(iValue);
    NLobj.DisplayNumLine();

    return 0;
}