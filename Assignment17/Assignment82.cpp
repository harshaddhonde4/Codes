/*
Write A Program which Accepts Number from the User and print till that Number
Example :
Input   :   5
Output  :   1   2   3   4   5
*/

#include<iostream>
using namespace std;

class Print
{
    private:
        int iValue;

    public:
        Print(int iNo)
        {
            iValue = iNo;
        }

        void Display()
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= iValue; iCnt++)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{  
    int iValue = 0; 
    cout<<"Please, Enter the Number :\n";
    cin>> iValue;

    Print Pobj(iValue);
    Pobj.Display();
    
    return 0;
}