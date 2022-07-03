#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{   
    int iPower = 1;
    int iCnt =0;
    for(iCnt = 1; iCnt <= iNo2;iCnt++)
    {
        iPower = iPower * iNo1;
    }
    return iPower;
}

bool CheckArmstrong(int iNo)
{
    int iTemp = 0 ,iDigCnt = 0 ,iDigit = 0, iSum = 0;

    if(iNo < 0)     //Updater
    {
        iNo = -iNo;
    }
    iTemp = iNo;
    
    while(iNo > 0)      //Count Digit
    {
        iDigCnt++;
        iNo = iNo / 10;
    }
    iNo = iTemp;

    while(iNo != 0)     //Seperate digis
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iDigCnt);    //pass digitcount and digit 
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
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
    int iValue = 0;
    bool bRet;

    printf("Enter a value to chekc if Armstrong number : ");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet ==true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }

    return 0 ;
}