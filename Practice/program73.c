#include<stdio.h>
#include<stdlib.h>


///works for positive
int FindMax(int Brr[],int iLength)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iMax < Brr[iCnt])
        {
            iMax = Brr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0;
    int *iPtr = NULL;
    
    printf("Enter not of elemnts: \n");
    scanf("%d",&iSize);

    iPtr = (int *) malloc(iSize * sizeof(int));
    
    printf("Enter Values of array: \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {    
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = FindMax(iPtr,iSize);
    printf("Maximum number is %d \n",iRet);

    free(iPtr);
    return 0;
}