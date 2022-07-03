//////////////////////////////////////////////////////////////////////////////////////////////////
//  Write a Program on Circular Linked List and all 8 fucntions
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Structure of a Node of Circular Linked List
//////////////////////////////////////////////////////////////////////////////////////////////////

struct sNode
{
    int iData;
    struct sNode *Next;
};

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Using typedef to increase readablity of the program
//////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct sNode NODE;

typedef struct sNode * PNODE;

typedef struct sNode ** PPNODE;

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Description :    Used to Insert First node in the Circular Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,PPNODE Tail ,int iNo)
{
    PNODE NewNode = NULL;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode -> iData =iNo;
    NewNode -> Next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    else
    {
        NewNode -> Next = *Head;
        *Head = NewNode;
    }
    
    (*Tail)->Next = *Head;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertLast
// Description :    Used to Insert Last node in the Circular Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
    PNODE NewNode = NULL,Temp =NULL;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode -> iData =iNo;
    NewNode -> Next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = NewNode;
        *Tail = NewNode;
    }
    else
    {
        (*Tail)->Next = NewNode;
        *Tail = NewNode;
    }

    (*Tail)->Next = *Head;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteFirst
// Description :    Used to Delete First node in the Circular Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    PNODE Temp = NULL;
    Temp = *Head;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        printf("Linked List already empty");
        return;
    }

    if(*Head == *Tail)
    {
        free(Temp);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = Temp -> Next;
        free((*Tail)->Next);
        (*Tail)->Next = *Head;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteLast
// Description :    Used to Delete Last node in the Circular Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE Temp = NULL;
    Temp = *Head;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        printf("Linked List already empty");
        return;
    }

    if(*Head == *Tail)
    {
        free(Temp);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(Temp->Next != (*Tail))
        {
            Temp= Temp->Next;
        }
        free(*Tail);
        *Tail = Temp;

        (*Tail)->Next = *Head;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    Used to Display the Circular Linked List
// Input :          Structure Pointer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head,PNODE Tail)
{   
    PNODE Temp = Head;

    if((Head == NULL)&&(Tail == NULL))
    {
        printf("No nodes in Linked List yet\n");
        return;
    }
    do
    {
        printf("|%d|-> ",Temp -> iData);
        Temp = Temp -> Next;
    }   
    while(Temp != Tail->Next);
    
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count
// Description :    Used to Count the node of Circular Linked List
// Input :          Structure Pointer
// Output :         Integer
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head,PNODE Tail)
{
    PNODE Temp = Head;
    int iNodeCnt = 0;

    if((Head == NULL)&&(Tail == NULL))
    {
        printf("No nodes in Linked List yet\n");
    }
    do
    {
        iNodeCnt++;
        Temp = Temp -> Next;
    }   
    while(Temp != Tail->Next);

    return iNodeCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertAtPos
// Description :    Used to Delete at specifed postion in the Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer,Integer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int iPos)
{
    int iSize = 0,iCnt=0;

    PNODE NewNode = NULL, Temp = NULL;

    iSize = Count(*Head,*Tail);
    if(( iPos> (iSize+1)) || ( iPos< 1))
    {
        printf("Enter a valid position");
        return;
    }

    if( iPos== 1)
    {
        InsertFirst(Head,Tail,iNo);
    }
    else if( iPos== (iSize+1))
    {
        InsertLast(Head,Tail,iNo);
    }
    else
    {
        NewNode = (PNODE)malloc(sizeof(NODE));
        
        NewNode -> iData =iNo;
        NewNode -> Next = NULL;
        
        Temp = *Head;
        for(iCnt =1;iCnt<(iPos-1);iCnt++)
        {
            Temp = Temp -> Next;
        }
        NewNode -> Next = Temp -> Next;
        Temp -> Next = NewNode;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteAtPos
// Description :    Used to Delete at specifed postion in the Circular Linked List
// Input :          Structure Pointer Pointer,Structure Pointer Pointer,Integer
// Output :         NA
// Date :           29/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
    int iSize = 0,iCnt=0;

    PNODE Temp = NULL,tempDelete =NULL;

    iSize = Count(*Head,*Tail);
    if(( iPos> (iSize+1)) || ( iPos< 1))
    {
        printf("Enter a valid position");
        return;
    }

    if( iPos== 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if( iPos== (iSize+1))
    {
        DeleteLast(Head,Tail);
    }
    else
    {   
        Temp = *Head;

        for(iCnt =1;iCnt<(iPos-1);iCnt++)
        {
            Temp = Temp -> Next;
        }
        tempDelete = Temp->Next;
        Temp -> Next = tempDelete-> Next;
        free(tempDelete);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Main fucntion
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //iRet is used to preserve the return value from Count Funciton.
    int iRet = 0;

    //First is the primary node's detail holder 
    PNODE First = NULL;
    PNODE Last = NULL;

    //Inserting Values using InsertFirst
    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    InsertFirst(&First,&Last,1);
    
    // Displaying the Linked List
    Display(First,Last);

    // Counting the nodes of Linked List
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values using InsertFirst
    InsertLast(&First,&Last,111);

    Display(First,Last);
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Deleting Values using DeleteFirst
    DeleteFirst(&First,&Last);

    Display(First,Last);
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Deleting Values using DeleteLast
    DeleteLast(&First,&Last);

    Display(First,Last);
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    InsertAtPos(&First,&Last,31,3);

    Display(First,Last);
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    DeleteAtPos(&First,&Last,3);

    Display(First,Last);
    iRet = Count(First,Last);
    printf(" Number of Nodes are : %d\n",iRet);

    //Return 0 notifies Operation System to terminate successfully
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//              OUTPUT:
// |1|-> |11|-> |21|-> |51|-> |101|-> 
//  Number of Nodes are : 5
//
// |1|-> |11|-> |21|-> |51|-> |101|-> |111|-> 
//  Number of Nodes are : 6
//
// |11|-> |21|-> |51|-> |101|-> |111|-> 
//  Number of Nodes are : 5
//
// |11|-> |21|-> |51|-> |101|-> 
//  Number of Nodes are : 4
//
// |11|-> |21|-> |31|-> |51|-> |101|-> 
//  Number of Nodes are : 5
//
// |11|-> |21|-> |51|-> |101|-> 
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////