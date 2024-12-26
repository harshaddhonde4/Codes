/*
Singly Linear Linked List in C++ 
Promblem Statement :   Write A Program which Displays all the Prime elements of the Linked List

Example : 
Input Linked List : | 11 | -> | 20 | -> | 17 | -> | 41 | -> | 22 | -> | 89 |
Output :    11  17  41  89
*/


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCountNode;

        SinglyLL()
        {
            head = NULL;
            iCountNode = 0;
        }

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
        void PrimeNumbers();
};

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn -> next = head;
        head = newn;
    }

    iCountNode++;
}

void SinglyLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCountNode++;
}

int SinglyLL::Count()
{
    return iCountNode;
}

void SinglyLL::Display()
{
    PNODE temp = NULL;
    temp = head;
    
    cout<<"Elements of the Linked List are :\n";

    while(temp != NULL)
    {   
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    }
    cout<<" NULL \n";
}

void SinglyLL::DeleteFirst()
{
    PNODE temp = NULL;
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    else if(head -> next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;
        head = head -> next;
        delete temp;
    }

    iCountNode--;
}

void SinglyLL::DeleteLast()
{
    PNODE temp = NULL;
    
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    else if(head -> next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCountNode--;
}

void SinglyLL::InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;
    if(iPos < 1 || iPos > (iCountNode + 1))
    {
        cout<<"InValid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iCountNode + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;
        temp = head;

        newn -> data = iNo;
        newn ->next = NULL;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
    iCountNode++;
}

void SinglyLL::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int iCnt = 0;

    if(iPos < 1 || iPos > iCountNode)   //Filter
    {
        cout<<"InValid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCountNode)
    {
        DeleteLast();
    }
    else
    {
        temp = head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = target -> next;
        delete target;
    }
    iCountNode--;
}

void SinglyLL::PrimeNumbers()
{   
    int iCnt = 0;
    PNODE temp = NULL;
    temp = head;

    bool isPrime = true;    //Assume the Number is Prime

    cout<<"Prime Numbers are :\n";

    while(temp != NULL)
    {   
        isPrime = true;

        for(iCnt = 2; iCnt <= (temp -> data) / 2; iCnt++)
        {
            if((temp -> data) % iCnt == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime == true || temp -> data == 2)
        {
            cout<<temp -> data << "\t";
        }

        temp = temp -> next;
    }

    cout<<endl;
}

int main()
{   
    SinglyLL sobj;
    int iChoice = 0;
    do
    {
        cout<<"--------------------------------MENU-----------------------------------\n";
        cout<<"1 : Insert Node At First\n";
        cout<<"2 : Insert Node At Last\n";
        cout<<"3 : Delete First Node\n";
        cout<<"4 : Delete Last Node\n";
        cout<<"5 : Insert Node At Position\n";
        cout<<"6 : Delete Node At Position\n";
        cout<<"7 : Display\n";
        cout<<"8 : Return the Count of Nodes in the Linked List\n";
        cout<<"9 : Display Prime Element's of the Linked List\n";
        cout<<"10 : Exit\n";

        cout<<"Enter Your Choice :\n";
        cin>>iChoice;

        switch (iChoice)
        {
        case 1:
        {
            int iData = 0;
            cout<<"Enter the Data :\n";
            cin>>iData;
            sobj.InsertFirst(iData);
            break;
        }
        
        case 2:
        {
            int iData = 0;
            cout<<"Enter the Data :\n";
            cin>>iData;
            sobj.InsertLast(iData);
            break;
        }

        case 3:
        {
            sobj.DeleteFirst();
            cout<<"First Node Deleted Successfully\n";
            break;
        }

        case 4:
        {   
            sobj.DeleteLast();
            cout<<"Last Node Deleted Successfully\n";
            break;
        }

        case 5:
        {
            int iPos = 0, iData = 0;

            cout<<"Enter the Position :\n";
            cin>>iPos;

            cout<<"Enter the Data :\n";
            cin>>iData;

            sobj.InsertAtPos(iData, iPos);
            break;
        }

        case 6:
        {
            int iPos = 0;

            cout<<"Enter the Position :\n";
            cin>>iPos;

            sobj.DeleteAtPos(iPos);
            break;
        }
        case 7:
        {
            sobj.Display();
            break;
        }

        case 8:
        {
            int iRet = 0;
            iRet = sobj.Count();
            cout<<"The Number of Node in the Linked List is/are : "<<iRet<<endl;
            break;
        }

        case 9:
        {   
            sobj.PrimeNumbers();
            break;
        }

        case 10:
        {
            cout<<"Exitting the Program!!\n";
            break;
        }

        default:
        {
            cout<<"Please, Enter a Valid Choice:(\n";
            break;
        }
    
        }
    }while (iChoice != 10);
    
    return 0;
}