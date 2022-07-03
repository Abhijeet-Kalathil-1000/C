#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iFactCnt = 0 ;

    for(iCnt = 2;iCnt <=(iNo/2);iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iFactCnt++;
            }
        }
    return iFactCnt;
}

bool CheckPrime(int iNo)
{
    int iRet = 0;

    iRet = CountFactors(iNo);
 
    if (iRet == 0)    
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
    bool bRet = false;
        
    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        printf("%d is a Prime number",iValue);
    }
    else
    {
        printf("%d is not a Prime number",iValue);
    }

    return 0;
}