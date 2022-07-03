#include<stdio.h>

int DigitAddI(int iNo)
{
    int iSum=0;
    int iDigit=0;
    
    while(iNo != 0)
    {
        iDigit= iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}


int main()
{
    int iValue = 0,iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = DigitAddI(iValue);

    printf("Count of small char are : %d\n",iRet);

    return 0;
}