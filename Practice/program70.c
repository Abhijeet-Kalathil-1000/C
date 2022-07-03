#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Brr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
        {
            if((Brr[iCnt] % 2) == 0)
            {
                printf("%d ",Brr[iCnt]);
            }
        }
}
int main()
{   
    int iSize = 0, iCnt = 0;
    int *iPtr = NULL;
    
    printf("Enter not of elemnts: \n");
    scanf("%d",&iSize);

    iPtr = (int *) malloc(iSize * sizeof(int));
    
    printf("Enter Values of array: \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {    
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayEven(iPtr,iSize);

    free(iPtr);
    return 0;
}