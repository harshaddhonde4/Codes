/*
Write A Program which Displays all the Palindrome elements of Singly Linked List

Input   : 11 -> 28 -> 17 -> 414 -> 6 -> 89
Output  : 11    414     6  
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    
    }
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        printf("Linked list is Empty\n");
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        printf("Linked list is Empty\n");
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void Display(PNODE head)
{
    printf("The Elements of the Linked List are :\n");
    while(head != NULL)
    {
        printf("| %d | -> ", head -> data);
        head = head -> next;
    }
    printf(" NULL\n");
}

int Count(PNODE head)
{
    int iCountNode = 0;
    while(head != NULL)
    {
        iCountNode++;
        head = head -> next;
    }
    return iCountNode;
}

void InsertAtPos(PPNODE head, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCountNode = 0, iCnt = 0;
    iCountNode = Count(*head);

    if(iPos < 1 || iPos > (iCountNode + 1))
    {
        printf("InValid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(head, iNo);
    }
    else if(iPos == (iCountNode + 1))
    {
        InsertLast(head, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        temp = *head;

        newn -> data = iNo;
        newn -> next = NULL;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
    
}

void DeleteAtPos(PPNODE head, int iPos)
{
    PNODE temp = NULL, target = NULL;

    int iCountNode = 0, iCnt = 0;
    iCountNode = Count(*head);

    if(iPos < 1 || iPos > (iCountNode))
    {
        printf("InValid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(head);
    }
    else if(iPos == (iCountNode))
    {
        DeleteFirst(head);
    }
    else
    {
        temp = *head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = target -> next;
        free(target);
    }
    
}

void DisplayPalindrome(PPNODE head)
{
    PNODE temp = *head;
    int iRev = 0, iDigit = 0, iNo = 0;
    printf("The Palindrome Elements of the Linked List are :\n");

    while(temp != NULL)
    {   
        iDigit = iRev = 0;
        iNo = temp -> data;

        while(iNo != 0)
        {
            iDigit = (iNo) % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = (iNo) / 10;
        }
        if((temp -> data) == iRev)
        {
            printf("%d\t", iRev);
        }
        temp = temp -> next;
    }

    printf("\n");
}

int main()
{   
    PNODE first = NULL;
    int iChoice = 0;

    do
    { 
        printf("-----------------MENU-------------\n");
        printf("1 : Insert At First\n");
        printf("2 : Insert At Last\n");
        printf("3 : Insert At Position\n");
        printf("4 : Delete At Start\n");
        printf("5 : Delete At End\n");
        printf("6 : Delete At Position\n");
        printf("7 : Display\n");
        printf("8 : Count of Node\n");
        printf("9 : Display Palindrome Elements of the Linked List\n");
        printf("10 : Exit\n");

        printf("Enter Your Choice :\n");
        scanf("%d", &iChoice);

        switch(iChoice)
        {
            case 1:
            {
                int iData = 0;
                printf("Enter the Data :\n");
                scanf("%d", &iData);
                InsertFirst(&first, iData);
                break;
            }

            case 2:
            {
                int iData = 0;
                printf("Enter the Data :\n");
                scanf("%d", &iData);
                InsertLast(&first, iData);
                break;
            }

            case 3:
            {
                int iData = 0, iPos = 0;

                printf("Enter the Data :\n");
                scanf("%d", &iData);

                printf("Enter the Position :\n");
                scanf("%d", &iPos);

                InsertAtPos(&first, iData, iPos);
                break;
            }

            case 4:
            {
                DeleteFirst(&first);
                printf("First Node Deleted SuccessFully\n");
                break;
            }

            case 5:
            {
                DeleteLast(&first);
                printf("Last Node Deleted Successfully\n");
            }

            case 6:
            {
                int iPos = 0;

                printf("Enter the Position :\n");
                scanf("%d", &iPos);
                DeleteAtPos(&first, iPos);
                break;
            }

            case 7:
            {
                Display(first);
                break;
            }

            case 8:
            {
                int iRet = 0;
                iRet = Count(first);
                printf("The Number of Nodes in the Linked List is/are : %d\n", iRet);
                break;
            }

            case 9:
            {
                DisplayPalindrome(&first);
                break;
            }

            case 10:
            {
                printf("Exitting Program\n");
                exit(0);
            }
        }
    }while(iChoice != 9);
    
    
    return 0;
}