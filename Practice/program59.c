
#include "header59.h"

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto ULONG lRet = 0;
        
    printf("Enter base : ");
    scanf("%d",&iValue1);
    printf("Enter power : ");
    scanf("%d",&iValue2);

    lRet = DisplayPower(iValue1,iValue2);

    printf("Answer is : %ld ",lRet);

    return 0;
}