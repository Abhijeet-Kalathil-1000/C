#include<stdio.h>

int SumI(int Arr[],int iSize)
{
    int iSum = 0;
    int iCnt =0;

    while(iCnt<iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int main()
{
    int Brr[]= {10,20,30,40};
    int iRet = 0;
    
    iRet = SumI(Brr,4);

    printf("Sum of array is  : %d \n",iRet);

    return 0;
}