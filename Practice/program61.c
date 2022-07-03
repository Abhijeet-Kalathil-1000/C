#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iTemp = 0 ,iDigCnt = 0 ,iDigit = 0, iSum = 0;
    int iMult = 1, iCnt =0;

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
        iMult = 1;
        iDigit = iNo % 10;
        for(iCnt = 1; iCnt <= iDigCnt;iCnt++)   //power 
            {
                iMult = iMult * iDigit;
            }
        iSum = iSum + iMult;    
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