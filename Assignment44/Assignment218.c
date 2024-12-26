/*
Write a Program which returns sum of Elements

Input Linked List : | 10 | -> | 20 | -> | 30 | -> | 40 | -> | NULL |

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

int Sum(PNODE head, int iTar)
{
    int iSum = 0;
    
    while(head!= NULL)
    {          
        iSum += head -> data;
        head = head -> next;
    }
    return iSum;
}
int main()
{   
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 10);
    InsertFirst(&first , 20);
    InsertFirst(&first , 30);
    InsertFirst(&first , 40);

    iRet = Sum(first, 30);

    printf("The Sum of Element's is : %d\n", iRet);

    return 0;
}