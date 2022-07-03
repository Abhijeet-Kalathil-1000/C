//////////////////////////////////////////////////////////////////////////////////////////////////
//  Write a Program on Doubly Linked List and all 8 fucntions
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
//  Structure of a Node of Doubly Linear Linked List
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
// Description :    Used to Insert First node in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL;
    
    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if(*Head == NULL)
    {
        *Head = NewNode;
    }

    else
    {
        NewNode->Next = *Head;
        (*Head)->Prev = NewNode;
        *Head =NewNode;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertLast
// Description :    Used to Insert Last node in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int iNo)
{
    
    PNODE NewNode = NULL, Temp = NULL;
    Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    if(*Head == NULL)
    {
        *Head = NewNode;
    }

    else if((*Head)->Next == NULL)
    {
        (*Head)->Next = NewNode;
        NewNode->Prev = *Head;
    }

    else
    {
        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }

        Temp->Next = NewNode;
        NewNode->Prev = Temp;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteFirst
// Description :    Used to Delete First node in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = NULL;
    Temp = *Head;

    if(Temp == NULL)
    {
        return;
    }

    if(Temp->Next == NULL)
    {
        free(Temp);
        *Head = NULL;
    }

    else
    {
        Temp = *Head;

        *Head = Temp->Next;
        (*Head)->Prev = NULL;
        free(Temp);
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteLast
// Description :    Used to Delete Last node in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE Temp = NULL,tempDelete;
    Temp = *Head;

    if(Temp == NULL)
    {
        return;
    }

    if(Temp->Next == NULL)
    {
        free(Temp);
        *Head = NULL;
    }

    else
    {
        while(Temp->Next->Next != NULL)
        {
            Temp = Temp->Next;
        }

        tempDelete = Temp->Next;
        Temp->Next = NULL;
        free(tempDelete);
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    Used to Display the Doubly Linear Linked List
// Input :          Structure Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    PNODE Temp = NULL;
    Temp = Head;
    printf("|NULL| ->");

    while(Temp != NULL)
    {
        printf("|%d| ->",Temp->iData);
        Temp = Temp->Next;
    }

    printf("|NULL|\n");
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count
// Description :    Used to Count the Doubly Linear Linked List
// Input :          Structure Pointer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iNodeCount = 0;
    PNODE Temp = Head;

    while(Temp != NULL)
    {
        iNodeCount++;
        Temp = Temp->Next;
    }

    return iNodeCount;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertAtPos
// Description :    Used to Insert at specifed postion in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer,Integer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,int Pos,int iNo)
{
    int iSize = 0, iCnt = 0;
    PNODE NewNode = NULL, Temp = NULL;
    Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->Prev = NULL;
    NewNode->iData = iNo;
    NewNode->Next = NULL;

    iSize = Count(Temp);
    
    if((Pos < 1)|| (Pos > iSize))
    {
        printf("Choose a valid posotion to Insert");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(Head,iNo);
    }

    else if(Pos == iSize)
    {
        InsertLast(Head,iNo);
    }

    else
    {
        for(iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            Temp=Temp->Next;
        }
        NewNode->Next=Temp->Next;
        Temp->Next->Prev= NewNode;
        Temp->Next = NewNode;
        NewNode->Prev = Temp;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DeleteAtPos
// Description :    Used to Delete at specifed postion in the Doubly Linear Linked List
// Input :          Structure Pointer Pointer,Integer
// Output :         NA
// Date :           28/05/2022
// Author :         Abhijeet Saji Kalathil
//
////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,int Pos)
{
    
    int iSize = 0,iCnt =0 ;
    PNODE Temp = NULL ,tempDelete = NULL;
    Temp = *Head;

    iSize = Count(*Head);
    
    if((Pos < 1)|| (Pos > iSize))
    {
        printf("Choose a valid posotion to Insert");
        return;
    }
    
    if(Pos == 1)
    {
        DeleteFirst(Head);
    }
    
    else if(Pos == iSize)
    {
        DeleteLast(Head);
    }

    else
    {
        for(iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            Temp=Temp->Next;
        }
        tempDelete = Temp->Next;
        Temp->Next = tempDelete->Next;
        tempDelete->Next->Prev = Temp;
        free(tempDelete);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Main fucntion
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    //Inserting Values
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);

    InsertFirst(&First,1);

    // Display the nodes of Linked List
    Display(First);
    // Counting the nodes of Linked List
    iRet= Count(First);
    printf("No of Node is : %d\n",iRet);

    //Deleting Values
    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);

    iRet= Count(First);
    printf("No of Node is : %d\n",iRet);

    //Inserting Values at specfic position on a Linked List
    InsertAtPos(&First,4,71);
    Display(First);
    
    iRet= Count(First);
    printf("No of Node is : %d\n",iRet);

    //Deleting Values at specfic position on a Linked List
    DeleteAtPos(&First,4);
    Display(First);
   
    iRet= Count(First);
    printf("No of Node is : %d\n",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//              OUTPUT:
//
//  |NULL| ->|1| ->|11| ->|21| ->|51| ->|101| ->|111| ->|121| ->|NULL|
//  No of Node is : 7
//
//  |NULL| ->|11| ->|21| ->|51| ->|101| ->|111| ->|NULL|
//  No of Node is : 5
//
//  |NULL| ->|11| ->|21| ->|51| ->|71| ->|101| ->|111| ->|NULL|
//  No of Node is : 6
//
//  |NULL| ->|11| ->|21| ->|51| ->|101| ->|111| ->|NULL|
//  No of Node is : 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////