//////////////////////////////////////////////////////////////////////////////////////////////////
//  Write a Program on Linked List and all 8 fucntions
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//  Structure of a Node of Linear Linked List
//////////////////////////////////////////////////////////////////////////////

struct sNode
{
    int  iData;
    struct sNode *Next;
};

//////////////////////////////////////////////////////////////////////////////
//  Using typedef to increase readablity of the program
//////////////////////////////////////////////////////////////////////////////

typedef struct sNode NODE;
typedef struct sNode * PNODE;
typedef struct sNode ** PPNODE;

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Description :    Used to Insert First node in the Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode -> iData =iNo;
    NewNode -> Next = NULL;

    if(*Head == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        NewNode -> Next = *Head;
        *Head = NewNode;
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertLast
// Description :    Used to Insert Last node in the Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL,Temp =NULL;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode -> iData =iNo;
    NewNode -> Next = NULL;

    if(*Head == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        Temp = *Head;
        while(Temp -> Next != NULL)
        {
            Temp = Temp -> Next;
        }
        Temp -> Next = NewNode;
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteFirst
// Description :    Used to Delete First node in the Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = NULL;
    if((*Head) == NULL)
    {
        printf("Linked List already empty");
        return;
    }
    else
    {
        Temp = *Head;
        *Head = Temp -> Next;
        free( Temp );
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteLast
// Description :    Used to Delete Last node in the Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE Temp = NULL,tempDelete = NULL;
    if((*Head) == NULL)
    {
        printf("Linked List already empty");
        return;
    }
    else
    {
        Temp = *Head;
        while(Temp -> Next -> Next !=NULL)
        {
            Temp = Temp -> Next;
        }
        tempDelete = Temp -> Next;
        Temp -> Next = NULL;
        free(tempDelete);
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    Used to Display the Linked List
// Input :          Structure Pointer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{   
    if(Head == NULL)
    {
        printf("No nodes in Linked List yet\n");
    }
    while(Head != NULL)
    {
        printf("|%d|-> ",Head -> iData);
        Head = Head -> Next;
    }   
    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count
// Description :    Used to Count the node of Linked List
// Input :          Structure Pointer
// Output :         Integer
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iNodeCnt = 0;
    while(Head!= NULL)
    {
        iNodeCnt++;
        Head = Head -> Next;
    }
    return iNodeCnt;
}

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertAtPos
// Description :    Used to Insert at specifed postion in the Linked List
// Input :          Structure Pointer Pointer,Integer,Integer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////


void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    int iSize = 0,iCnt=0;
    PNODE NewNode = NULL, Temp = NULL;


    iSize = Count(*Head);
    if(( iPos> (iSize+1)) || ( iPos< 1))
    {
        printf("Enter a valid position");
        return;
    }
    if( iPos== 1)
    {
        InsertFirst(Head,iNo);
    }
    else if( iPos== (iSize-1))
    {
        InsertLast(Head,iNo);
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

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteAtPos
// Description :    Used to Delete at specifed postion in the Linked List
// Input :          Structure Pointer Pointer,Integer,Integer
// Output :         NA
// Date :           18/05/2022
// Author :         Abhijeet Saji Kalathil
//
//////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,int  iNo,int iPos)
{
    int iSize = 0,iCnt=0;
    PNODE NewNode = NULL,Temp = NULL,tempDelete = NULL;


    iSize = Count(*Head);
    if(( iPos> (iSize+1)) || ( iPos< 1))
    {
        printf("Enter a valid position");
        return;
    }
    if( iPos== 1)
    {
        DeleteFirst(Head);
    }
    else if( iPos== (iSize-1))
    {
        DeleteLast(Head);
    }
    else
    {        
       Temp= *Head;
        for(iCnt =1;iCnt<( iPos-1);iCnt++)
        {
            Temp = Temp -> Next;
        }
        tempDelete = Temp -> Next;
        Temp -> Next = Temp -> Next -> Next;
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

    //Inserting Values using InsertFirst
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,1);
    
    // Displaying the Linked List
    Display(First);

    // Counting the nodes of Linked List
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values using InsertFirst
    InsertLast(&First,111);

    Display(First);
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Deleting Values using DeleteFirst
    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Deleting Values using DeleteLast
    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    InsertAtPos(&First,31,4);

    Display(First);
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    DeleteAtPos(&First,31,3);

    Display(First);
    iRet = Count(First);
    printf(" Number of Nodes are : %d\n",iRet);

    //Return 0 notifies Operation System to terminate successfully
    return 0;
}

/////////////////////////////////////////////////////////////
//              OUTPUT:
//  |1|-> |11|-> |21|-> |51|-> |101|-> NULL
//  Number of Nodes are : 5
//
//  |1|-> |11|-> |21|-> |51|-> |101|-> |111|-> NULL
//  Number of Nodes are : 6
//
//  |11|-> |21|-> |51|-> |101|-> |111|-> NULL
//  Number of Nodes are : 5
//
//  |11|-> |21|-> |51|-> |101|-> NULL
//  Number of Nodes are : 4
//
//  |11|-> |21|-> |51|-> |31|-> |101|-> NULL
//  Number of Nodes are : 5
//
//  |11|-> |21|-> |31|-> |101|-> NULL
//  Number of Nodes are : 4
/////////////////////////////////////////////////////////////