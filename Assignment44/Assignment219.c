/*
Write a Program which returns Largest Elements in the Linked List

Input Linked List : | 110 | -> | 220 | -> | 330 | -> | 440 | -> | NULL |

Output : 100
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

int LargestElement(PNODE head, int iTar)
{
    int iLarge = 0;
    
    while(head!= NULL)
    {          
        if(iLarge < head -> data)
        {
            iLarge = head -> data;
        }
        head = head -> next;
    }
    return iLarge;
}
int main()
{   
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 110);
    InsertFirst(&first , 220);
    InsertFirst(&first , 330);
    InsertFirst(&first , 440);

    iRet = LargestElement(first, 30);

    printf("The Largetest Element is : %d\n", iRet);

    return 0;
}