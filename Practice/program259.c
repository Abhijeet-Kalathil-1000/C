#include<stdio.h>

int SumR(int Arr[],int iSize)
{
    static int iSum = 0,iCnt = 0;

    if(iCnt<iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        SumR(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int Brr[]= {10,20,30,40};
    int iRet = 0;
    
    iRet = SumR(Brr,4);

    printf("Sum of array is  : %d \n",iRet);

    return 0;
}