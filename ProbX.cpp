/*
In One Website the API's is called of with keys as ID, location, name, and PhoneNo, these Attrubutes are
serially stored as a chain of Reastaurent in india. The First Reastaurent is at Mumbai Location
second at Delhi, third at banglore and fourth at Pune , Vizag and Calcutta Respectively if i Need to Shift the 
Mumbai Location to Gujrat and respectivelt interchanging the delhi and Banglore by Using Terminal Commands
*/

/*
Options:
1] Add City
2] Show City
3] Shift Cities
*/
#include<iostream>
using namespace std;

class Hotel
{
    public:
        string Name;
        string location;
        int Id;
        long int PhoneNo;

        void SetValues(string sName, string loc, int iid, long int ipno)
        {
            Name = sName;
            location = loc;
            Id = iid;
            PhoneNo = ipno;
        }
};

int main()
{   
    int iChoice = 0, iCnt = 0, iSize = 0;
    cout<<"Enter the Total Numbers of Hotels ;\n";
    cin>>iSize;
    Hotel *hobj = new Hotel[iSize];


    while(1)
    {   
        cout<<"------------------------------------------MENU---------------------------------\n";
        cout<<"1 : Display Cities\n";
        cout<<"2 : Add City\n";
        cout<<"3 : Shift City\n";

        cout<<"Enter the Choice :\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            {   
                int i = 0;
                cout<<"Display Cities :\n";
                for( i = 0; i < iCnt; i++)
                {
                    cout<<"ID : "<<i<<"\t"<<"Name : "<<hobj[i].Name<<"\t"<<"City : "<<hobj[i].location<<"\t"<<"Phone :"<<hobj[i].PhoneNo<<endl;
                }
                break;
            }

            case 2:
            {   

                if(iCnt < 10)
                {   
                    
                    cout<<"Adding City\n";
                    cout<<"Enter the City Name :\n";
                    cin>>hobj[iCnt].location;

                    cout<<"Enter the Hotel Name :\n";
                    cin>>hobj[iCnt].Name;

                    cout<<"Enter the Phone Number :\n";
                    cin>>hobj[iCnt].PhoneNo;

                    cout<<"Added City "<<hobj[iCnt].Name<<" With ID : "<<iCnt<<endl;
                    hobj[iCnt].Id = iCnt;

                    iCnt++;
                }
                else
                {
                    cout<<"No Location is Avialble Currently:(\n";
                }
                break;
            }

            case 3:
            {   
                int IID = 0;
                cout<<"Enter the ID whose City Name is to be Modified :\n";
                cin>>IID;
                if(IID >= 0 && IID < iSize)
                {
                    cout<<"Enter the City Name :\n";
                    cin>>hobj[IID].location;
                }
                else
                {
                    cout<<"Enter a Valid ID:(\n";
                }
                break;
            }
            default:
            {
                cout<<"Enter a Valid Option :\n";
            }
        }
    }
    return 0;
}