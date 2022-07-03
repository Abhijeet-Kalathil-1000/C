#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    //Static memeory allocation
    struct node obj;

    //Dynamic memory allocation
    struct node *ptr = (struct node *)malloc(sizeof(node));

    obj.data = 11;      //Drect accessing operator
    obj.next = NULL;

    ptr-> data = 11;       //Indirect accessing operator
    ptr-> next = NULL;
    return 0;
}