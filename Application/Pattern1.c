/*

*
*   *
*   *   *
*   *   *   *
*   *   *   *   *

*/

#include<stdio.h>
#include<stdlib.h>

void LowTriPattern(int iNo) //Low triangle matrix
{
    int iCnt1 = 0 ,iCnt2 = 0;

    for(iCnt1=1;iCnt1<iNo;iCnt1++)
    {
        for(iCnt2=1;iCnt2<iNo;iCnt2++)
        {
            if((iCnt1==iCnt2) || (iCnt1>iCnt2))
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the no of rows you need : \n");
    scanf("%d",&iValue);

    LowTriPattern(iValue);

    return 0;
}