#include<stdio.h>
#include<stdbool.h>

int CheckDivisble(int iNo)
{
    if  ((iNo % 3) == 0) && 
        ((iNo % 5) == 0)
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
    printf("Enter a value to check if divisbile by both 3 & 5 \n");
    scanf("%d",&iValue);

    bRet = CheckDivisble(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by both 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by both 3 & 5\n",iValue);
    }
    return 0;
}