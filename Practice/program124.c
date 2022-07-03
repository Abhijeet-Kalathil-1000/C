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

void DeleteFirst(PPNODE head)
{
    // if LL is empty then retutn
    
    // if LL contain atleast 1 node then

    // Store the address of 2nd node in 1st pointer throught head
    
    // And delete the first node

    PNODE temp = 0;

    if(*head == NULL)   //LL empty
    {
        return;
    }
    else        //LL has atleast 1 node
    {   
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    //if LL is empty then return
   
    //if LL contains one node then delete that node and return
   
    //if LL contains more than one node then travel till 2nd last node and delete last.

    PNODE temp = 0;
    
    if(*head == NULL)   //LL empty
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp->next->next !=NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next=NULL;
    }
}

void InsertAtPos(PPNODE head,int no,int pos)
{
    //conside no of node are 4

    //If position is invalid then return directly (<1 OR >5)
    //If position is 1 then call insertFirst
    //if position is N+1 then call Insertlast (position 5)
    
    PNODE temp = NULL;
    
    PNODE newn = NULL;
    
    int size = 0, iCnt =0 ;
    size = Count(*head);
    
    if((pos > (size+1)) || (pos < 1))  //filter
    {
        printf("Invalid position\n");
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else
    {
       newn = (PNODE)malloc(sizeof(NODE)); 

        newn->data = no;
        newn->next = NULL;
        
        temp = *head;
        for(iCnt=1;iCnt<(pos-1);iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head,int pos)
{
    //conside no of node are 4

    //If position is invalid then return directly (<1 OR >4)
    
    //If position is 1 then call DeleteFirst
    
    //if position is N then call DeleteLast (position 4)
    
    int size = 0, iCnt =0 ;
    
    PNODE temp = NULL,tempDele= NULL;
        
    size = Count(*head);
    
    if((pos > size) || (pos < 1))  //filter
    {
        printf("Invalid position\n");
        return;
    }
    
    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else
    {    
        temp = *head;
        for(iCnt=1;iCnt<(pos-1);iCnt++)
        {
            temp = temp->next;
        }
        
        tempDele = temp->next;
        temp->next = temp->next->next;
        
        free(tempDele);
    }
}

int main()
{
    int iRet=0;

    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);
    DeleteAtPos(&first,3);

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
    
    DeleteFirst(&first);
    
    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("\nNumber of nodes : %d\n",iRet);

    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("\nNumber of nodes : %d\n",iRet);
       
    return 0;


}