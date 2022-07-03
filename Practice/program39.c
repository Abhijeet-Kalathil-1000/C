#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2;iCnt <=(iNo/2);iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }
}
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