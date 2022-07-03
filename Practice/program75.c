#include<stdio.h>
#include<stdlib.h>


int FindMin(int Brr[],int iLength)
{
    int iCnt = 0;
    int iMin = Brr[0];

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iMin > Brr[iCnt])
        {
            iMin = Brr[iCnt];
        }
    }
    return iMin;
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

    iRet = FindMin(iPtr,iSize);
    printf("Minimun number is %d \n",iRet);

    free(iPtr);
    return 0;
}