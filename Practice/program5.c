#include<stdio.h>

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main ()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter value for 1st element\n");
    scanf("%d",&iNo1);
    
    printf("Enter value for 2nd element\n");
    scanf("%d",&iNo2);

    iRet = Addition(iNo1,iNo2);
    printf("Additon is : %d\n",iRet);

    return 0;
}