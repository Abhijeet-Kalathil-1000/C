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
    //Allocate memmory for node
    //Initalize that node

    //Check wether LL is empty or not
    //If LL is empty then new node is the first node so update its addr in first ponter through head
    
    //If LL is not empty then store the addres of first nod ein the next pointer of our node
    //update the first pointer through head

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //newn = (struct noce *)malloc(12)

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)//LL empty
    {
        *head = newn;
    }
    else//LL has atleast 1 node
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    //Allocate memmory for node
    //Initalize that node

    //Check wether LL is empty or not
    //If LL is empty then new node is the first node so update its addr in first ponter through head
    
    //If LL is not empty then 
    //travell till last node of LL
    //store address of new node in the next pointer of last node

    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //newn = (struct noce *)malloc(12)

    newn->data = no;
    newn->next = NULL;
    

    if(*head == NULL)//LL empty
    {
        *head = newn;
    }
    else//LL has atleast 1 node
    {   
        temp = *head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
    }
}

void Display(PNODE head)
{
    printf("Elemnts form Ll are : \n\n");
    while(head != NULL)
    {
        printf("|%d|-> ",head->data);
        head = head-> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt= 0;
    while(head != NULL)
    {
        iCnt++;
        head = head-> next;
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

    Display(first);
    iRet = Count(first);
    printf("\nNumber of nodes : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);
    iRet = Count(first);
    printf("\nNumber of nodes : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);
    iRet = Count(first);
    printf("\nNumber of nodes : %d\n",iRet);
    
    return 0;
}