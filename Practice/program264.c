#include<stdio.h>

int DigitAddR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        DigitAddR(iNo);
    }
    return iSum;
}


int main()
{
    int iValue = 0,iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = DigitAddR(iValue);

    printf("Count of small char are : %d\n",iRet);

    return 0;
}