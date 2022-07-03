#include<stdio.h>

int ChkEven(int iNo)
{
       if((iNo % 2) == 0)
       {
        return 1;
       }
       else
       {
            return 0;
       }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);    // 21

    iRet = ChkEven(iValue);     // ChkEven(21)
    if(iRet == 1)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}