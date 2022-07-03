// accept 2 number and retun power of 1st as base and 2nd as power (2^4)
#include<stdio.h>

int DisplayPower(int iNo1, int iNo2)
{   
    int iPower = 1;
    int iCnt =0;
    for(iCnt = 1; iCnt <= iNo2;iCnt++)
    {
        iPower = iPower * iNo1;
    }
    return iPower;
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    register int iRet = 0;
        
    printf("Enter base : ");
    scanf("%d",&iValue1);
    printf("Enter power : ");
    scanf("%d",&iValue2);

    iRet = DisplayPower(iValue1,iValue2);

    printf("Answer is : %d ",iRet);

   
    return 0;
}