#include<stdio.h>
#include<stdlib.h>  //for malloc and free

void Display(int Brr[],int iNo)
{
    register int iCnt = 0;
    printf("Entered elements are : \n");
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        printf("%d ",Brr[iCnt]);
    }
}

int main()
{
    //auto int Arr[5];          Static memory allocation
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc (iSize * sizeof(int));  //Dynamic memory allocation

    printf("Enter elements : \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);
    return 0;
}