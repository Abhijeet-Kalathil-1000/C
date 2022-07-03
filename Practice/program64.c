#include<stdio.h>

void Display(int *iPtr)
{
    register int iCnt = 0;
    printf("Entered elements are : \n");
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        printf("%d ",*iPtr);
        iPtr++;
    }
}

int main()
{
    auto int Arr[5];
    register int iCnt = 0;
    
    printf("Enter elements : \n");
    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);

    return 0;
}