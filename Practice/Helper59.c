
#include "header59.h"

ULONG DisplayPower(int iNo1, int iNo2)
{   
    auto ULONG lPower = 1;
    register int iCnt =0;
    for(iCnt = 1; iCnt <= iNo2;iCnt++)
    {
        lPower = lPower * iNo1;
    }
    return lPower;
}
