// accept 2 number and retun power of 1st as base and 2nd as power (2^4)
#include<stdio.h>

long int DisplayPower(int iNo1, int iNo2)
{   
    long int lPower = 1;
    register int iCnt =0;
    for(iCnt = 1; iCnt <= iNo2;iCnt++)
    {
        lPower = lPower * iNo1;
    }
    return lPower;
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto long int lRet = 0;
        
    printf("Enter base : ");
    scanf("%d",&iValue1);
    printf("Enter power : ");
    scanf("%d",&iValue2);

    lRet = DisplayPower(iValue1,iValue2);

    printf("Answer is : %ld ",lRet);

   
    return 0;
}