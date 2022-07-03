#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}


void Display(PNODE head)
{
    if(head != NULL)
    {
        printf("|%d|-> ",head->data);        
        Display(head->next);
    }
}

void RevDisplay(PNODE head)
{
    if(head != NULL)
    {
        RevDisplay(head->next);
        printf("|%d|-> ",head->data);        
    }
}

int Count(PNODE head)
{
    static int iCnt= 0;
    if(head != NULL)
    {
        iCnt++;
        Count(head->next);
    }
    return iCnt;
}

int main()
{
    int iRet=0;

    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    printf("Elemnts form Ll are : \n");
    Display(first);
    printf("NULL\n\n");
    iRet = Count(first);
    printf("Number of nodes : %d\n",iRet);

    printf("Elemnts form Ll n reverse : \n");
    printf("NULL ->");
    RevDisplay(first);
    printf("\n\n");
    
    
    return 0;
}