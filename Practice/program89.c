// INPUT : 4    4
/* OUTPUT : 
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/
#include<stdio.h>

void Display(int iNo1,int iNo2)
{
    int iCnt1 = 0,iCnt2 = 0;

    for(iCnt1 = 1;iCnt1 <= iNo1;iCnt1++)
    {
        for(iCnt2 = 1;iCnt2 <= iNo2;iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Please enter the value :\n");
    scanf("%d",&iValue1);
    
    printf("Please enter the value :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}