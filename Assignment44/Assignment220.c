/*
Write a Program which returns Smallest Element in the Linked List

Input Linked List : | 440 | -> | 330 | -> | 220 | -> | 110 | -> | NULL |

Output : 110
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

int SmallestElement(PNODE head, int iTar)
{
    int iSmall = 0;
    iSmall = head -> data;
    
    while(head!= NULL)
    {          
        if(iSmall > head -> data)
        {
            iSmall = head -> data;
        }
        head = head -> next;
    }
    return iSmall;
}
int main()
{   
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 440);
    InsertFirst(&first , 330);
    InsertFirst(&first , 220);
    InsertFirst(&first , 110);


    iRet = SmallestElement(first, 30);

    printf("The Smallest Element is : %d\n", iRet);

    return 0;
}