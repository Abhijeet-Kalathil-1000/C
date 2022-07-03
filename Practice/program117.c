#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PNODE;

int main()
{
    //Static memeory allocation
    NODE obj;

    //Dynamic memory allocation
    PNODE ptr = (PNODE)malloc(sizeof(NODE));

    obj.data = 11;      //Drect accessing operator
    obj.next = NULL;

    ptr-> data = 11;       //Indirect accessing operator
    ptr-> next = NULL;
    return 0;
}