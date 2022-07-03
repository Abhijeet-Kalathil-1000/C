#include<stdio.h>

int Fact(int iNo)
{
    int iCnt = 0,iFact=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a value : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}
