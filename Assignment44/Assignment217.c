/*
Write a Program which search first occurece of Particular element in Linked List

Input Linked List : | 10 | -> | 20 | -> | 30 | -> | 40 | -> | 50 | -> | 30 | -> | 70 | 

Input Element : 30
Output : 3
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

int LastOccurence(PNODE head, int iTar)
{
    int iIdx = 1, iLastIdx = -1;
    
    while(head!= NULL)
    {   
       if(head -> data == iTar)
       {
           iLastIdx = iIdx;
       } 
        iIdx++;
        head = head -> next;
    }
    return iLastIdx;
}
int main()
{   
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 10);
    InsertFirst(&first , 20);
    InsertFirst(&first , 30);
    InsertFirst(&first , 40);
    InsertFirst(&first , 50);
    InsertFirst(&first , 30);
    InsertFirst(&first , 70);

    iRet = LastOccurence(first, 30);
    if(iRet == -1)
    {
        printf("Element is Not Present\n");
    }
    else
    {
        printf("The Position of Last Occurence of Element is : %d\n", iRet);
    }

    return 0;
}