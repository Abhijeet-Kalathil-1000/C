//  Singly Linear Linked List  (8 Functions + 1 main)
/*
    InsertFirst
    InsertLast
    InsertAtPostion

    DeleteFirst
    DeleteLast
    DeleteAtPosition

    Display
    Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*
    Step 1 : Allocate momeory for node
    Step 2 : intialise the node
    Step 3 : check whether LL is empty or not
    Step 4 : If LL empty then the new node is the first node
    Step 5 : If LL contains alteast one node in it then store the address od previous first node in the nest pointer of new node 
*/

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)   //if LL is empty
    {
        *Head = newn;
    }
    else    //IF LL contains atleast one node
    {
        newn-> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}
/*RULES :
    
    1. Use only dynamic memory allocations
    2. Dont write any technical syntax in main
    3. Dont use any global variables
    4. Be carefull while manipulating the first pointer
    5. Pass te First pointer directly if the function is not going to modify LL (Dispaly,Count)
    6.Pass tje address of the First pointer if hte function is going to modifythe LL (InsertFirst, InsertLast, InsertAtPostion, DeleteFirst, DeleteLast, DeleteAtPosition )

*/



