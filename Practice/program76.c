#include<stdio.h>
#include<stdlib.h>


int Frequency(int Brr[],int iLength,int iNo)
{
    int iCnt = 0 , iCheckCnt = 0  ;
    int iMax = Brr[0];


    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iNo == Brr[iCnt])
        {
            iCheckCnt++;
        }
    }
    return iCheckCnt;
}

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0 ,iCheck = 0;
    int *iPtr = NULL;
    
    printf("Enter no of elemnts: \n");
    scanf("%d",&iSize);

    printf("Enter no of itteration you want to check : \n");
    scanf("%d",&iCheck);

    iPtr = (int *) malloc(iSize * sizeof(int));
    
    printf("Enter Values of array: \n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {    
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Frequency(iPtr,iSize,iCheck);
    printf("Frequency of %d is %d \n",iCheck,iRet);

    free(iPtr);
    return 0;
}