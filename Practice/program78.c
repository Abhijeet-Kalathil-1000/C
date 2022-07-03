#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Brr[],int iLength, int iNo)
{
    int iCnt = 0 , iFrequency = 0  ;
    int iMax = Brr[0];


    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iNo == Brr[iCnt])
        {
            iFrequency++;
            break;
        }
    }
    if(iFrequency > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0 ,iCheck = 0;
    bool bRet ;
    int *iPtr = NULL;
    
    printf("Enter no of elemnts: \n");
    scanf("%d",&iSize);

    printf("Enter no you want to search : \n");
    scanf("%d",&iCheck);

    iPtr = (int *) malloc(iSize * sizeof(int));
    
    printf("Enter Values of array: \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {    
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Search(iPtr,iSize,iCheck);
    if(bRet == true)
    {
        printf("%d is available \n",iCheck);
    }
    else 
    {
        printf("%d is not available \n",iCheck);
    }

    
    free(iPtr);
    return 0;
}