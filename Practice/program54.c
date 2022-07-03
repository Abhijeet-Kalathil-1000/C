#include<stdio.h>
#include<stdbool.h>

bool CheckPall(int iNo)
{   
    int iCheck = 0;
    int iDigit = 0;
    int iRevDigit = 0;    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCheck = iNo;

    while(iNo > 0)   
    {
        iDigit = iNo % 10;
        iRevDigit = ((iRevDigit * 10) + iDigit);
        iNo = iNo / 10;
    }
    if(iRevDigit == iCheck)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{
    int iValue = 0;
    bool bRet;
        
    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckPall(iValue);

    if(bRet == true)
    {
        printf("%d is a pallendrome",iValue);
    }
    else
    {
        printf("%d is not a pallendrome",iValue);
    }

    return 0;
}