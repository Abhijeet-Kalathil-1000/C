#include<stdio.h>

int RevDigits(int iNo)
{   
    int iDigit = 0;
    int iRevDigit = 0;    

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)   
    {
        iDigit = iNo % 10;
        iRevDigit = ((iRevDigit * 10) + iDigit);
        iNo = iNo / 10;
    }
    return iRevDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = RevDigits(iValue);
    printf("Reverse number is  %d ",iRet);

    return 0;
}