#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         
    {
        iNo = -iNo;
    }

    if(iNo%2 != 0) 
    {
        for(iCnt = 2;iCnt <=(iNo/2);iCnt++)
            {
                break;
            }
        if (iCnt < (iNo/2))    
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
/*
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt <=(iNo/2);iCnt++)
        {
            if(iCnt % iNo ==0)
            {
                break;
            }
        }
    if (iCnt == ((iNo/2)+1))    
    {
        return true;
    }
    else
    {
        return false;
    }
sir ajun ek logic bhetlaye , ekda check kara na plz correct ahe ka
}
*/
int main()
{
    int iValue = 0;
    bool bRet = false;
        
    printf("Enter a number to check if its prime : ");
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