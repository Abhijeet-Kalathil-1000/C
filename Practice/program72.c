#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[],int iLength)
{
    int iSum =0 , iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
	int iSize = 0, iRet =0 ;
	int *ptr = NULL;
	
	printf("Enter number of elemts\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)* iSize);
	
	printf("Enter the value \n");
	for(iCnt = 0; iCnt< iSize;iCnt++)
	{
	scanf("%d",&ptr[iCnt]);
	}
	
	iRet = SummationoNumber(ptr,iSize);
	
	printf("Sumation is  : % d\n",iret);
	free(ptr);
	
	retunr 0;
}