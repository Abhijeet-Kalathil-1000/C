//////////////////////////////////////////////////////////////////////////////////////////////////
//  Write a Program on Doubly Circular List and all 8 fucntions
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
//  Structure of a Node of Doubly Circular Linked List
////////////////////////////////////////////////////////////////////////////////////////

struct sNode
{
    int iData;
    struct sNode *Next;
    struct sNode *Prev;
};

////////////////////////////////////////////////////////////////////////////////////////
//  Using typedef to increase readablity of the program
////////////////////////////////////////////////////////////////////////////////////////

typedef struct sNode NODE;

typedef struct sNode * PNODE;

typedef struct sNode ** PPNODE;

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Description :    Used to Insert First node in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE NewNode = NULL;
    NewNode = (PNODE)malloc(sizeof(NODE));
    
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    else
    {
        NewNode->Next = *Head;
        (*Head)->Prev = NewNode;
        *Head =NewNode;
    }
    (*Head)->Prev = *Tail;
    (*Tail)->Next = *Head;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertLast
// Description :    Used to Insert Last node in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
    
    PNODE NewNode = NULL;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    else if((*Head)->Next == *Head)
    {
        (*Head)->Next = NewNode;
        (*Tail) = NewNode;
        NewNode->Next = *Head;
        NewNode->Prev = *Head;
    }
    else
    {
        (*Tail)->Next = NewNode;
        NewNode->Prev = *Tail;
        *Tail = NewNode;
    }

    (*Head)->Prev = *Tail;
    (*Tail)->Next = *Head;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteFirst
// Description :    Used to Delete First node in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        return;
    }

    if((*Head)->Next == *Tail)
    {
        free(Temp);
        *Head = NULL;
        *Tail = NULL;
    }

    else
    {
        *Head = (*Head)->Next;
        free(Temp->Prev); 
    }
    (*Tail)->Next = *Head;
    (*Head)->Prev =*Tail;
    
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteLast
// Description :    Used to Delete Last node in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        return;
    }

    if((*Head)->Next == *Tail)
    {
        free(Temp);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->Prev;
        free(Temp->Prev);
    }
    (*Tail)->Next = *Head;
    (*Head)->Prev = *Tail;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    Used to Display the Doubly Circular Linked List
// Input :          Structure Pointer,Structure Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head,PNODE Tail)
{
    PNODE Temp = NULL;
    Temp = Head;
    printf("|NULL| ->");

    do
    {
        printf("|%d| ->",Temp->iData);
        Temp = Temp->Next;
    }while(Temp != Tail);

    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count
// Description :    Used to Count the Doubly Circular Linked List
// Input :          Structure Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head,PNODE Tail)
{
    int iNodeCount = 0;
    PNODE Temp = Head;

    do
    {
        iNodeCount++;
        Temp = Temp->Next;
    }while(Temp != Tail);

    return iNodeCount;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertAtPos
// Description :    Used to Insert at specifed postion in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,PPNODE Tail, int Pos,int iNo)
{
    int iSize = 0, iCnt = 0;
    PNODE NewNode = NULL, Temp = NULL;
    Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    iSize = Count(*Head,*Tail);
    
    if((Pos < 1)|| (Pos > iSize+1))
    {
        printf("Choose a valid posotion to Insert");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(Head,Tail,iNo);
    }

    else if(Pos == iSize+1)
    {
        InsertLast(Head,Tail,iNo);
    }

    else
    {
        for(iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            Temp=Temp->Next;
        }
        NewNode->Prev =Temp;
        Temp->Next->Prev= NewNode;
        NewNode->Next=Temp->Next;
        Temp->Next = NewNode;
        
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteAtPos
// Description :    Used to Delete at specifed postion in the Doubly Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,PPNODE Tail, int Pos)
{
    
    int iSize = 0,iCnt =0 ;
    PNODE Temp = NULL ,TempDelete = NULL;

    Temp = *Head ;
    

    iSize = Count(*Head,*Tail);
    
    if((Pos < 1)|| (Pos > iSize))
    {
        printf("Choose a valid posotion to Insert");
        return;
    }
    
    if(Pos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    
    else if(Pos == iSize)
    {
        DeleteLast(Head,Tail);
    }

    else
    {
        for(iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            Temp=Temp->Next;
        }
        Temp->Next = Temp->Next->Next;
        free(Temp->Next->Next);
        Temp->Next->Prev = Temp;

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Main fucntion
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    //Inserting Values
    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    InsertFirst(&First,&Last,1);

    // Display the nodes of Linked List
    Display(First,Last);
    // Counting the nodes of Linked List
    iRet= Count(First,Last);
    printf("No of Node is : %d\n",iRet);

    //Deleting Values
    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);

    Display(First,Last);

    iRet= Count(First,Last);
    printf("No of Node is : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    InsertAtPos(&First,&Last,4,71);
    Display(First,Last);
    
    iRet= Count(First,Last);
    printf("No of Node is : %d\n",iRet);

    //Deleting Values at specfic position on a Linked List
    DeleteAtPos(&First,&Last,4);
    Display(First,Last);
   
    iRet= Count(First,Last);
    printf("No of Node is : %d\n",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//              OUTPUT:
//
//     |NULL| ->|1| ->|11| ->|21| ->|51| ->|101| ->|111| ->
//     No of Node is : 6
//
//     |NULL| ->|11| ->|21| ->|51| ->|101| ->
//     No of Node is : 4
//
//     |NULL| ->|11| ->|21| ->|51| ->|71| ->|101| ->
//     No of Node is : 5
//
//     |NULL| ->|11| ->|21| ->|51| ->|101| ->
//     No of Node is : 4
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////