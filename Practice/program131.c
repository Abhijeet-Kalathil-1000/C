//Linear Linked List template
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  // *
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{
    printf("Linked List : \n");
    while(head != NULL)
    {
        printf("|%d| <=> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }

    return iCnt;
}

void InsertFirst ( PPNODE head, int no )
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;     //  *

    if(*head != NULL)
    {
        newn-> next = *head;
        newn->next->prev = newn; //* OR (*head)-> prev = newn; //
    }
    *head = newn;
}

void InsertLast ( PPNODE head, int no )
{
    PNODE newn = NULL,temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;     //  *

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
        newn->prev=temp; //*  OR  newn->prev=temp;
    }
}

void DeleteFirst ( PPNODE head )
{
    if(*head == NULL)
    {
        return;
    }
    if((*head)->next == NULL)  // single node
    {
        free(*head);
        *head = NULL;
    }
    else        //*
    {
        *head = (*head)->next;
        free((*head)->prev);
        (*head)-> prev = NULL;
    }
}

void DeleteLast ( PPNODE head )
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head)->next == NULL)  // single node
    {
        free((*head));
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp->next->next !=NULL)
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next = NULL;     
    }
}

void InsertAtPos(PPNODE head, int no, int pos)
{


}

void DeleteAtPos(PPNODE head, int pos)
{
    
}

int main()
{
    int iRet = 0;

    PNODE first = NULL;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    Display(first);
    iRet = Count(first);

    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&first);
    DeleteLast(&first);

    Display(first);
    iRet = Count(first);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}