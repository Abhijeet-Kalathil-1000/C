/*
    *   *   *   *   *   *  
*   1   2   3   4   5   6   *
*   2   3   4   5   6   7   *
*   3   4   5   6   7   8   *
*   4   5   6   7   8   9   *
*   5   6   7   8   9   1   *
*   6   7   8   9   1   2   *
    *   *   *   *   *   *  

*/

#include<stdio.h>
#include<stdlib.h>

void ComPattern(int iNo1,int iNo2) //complex matrix
{
    int iCnt1 = 0 ,iCnt2 = 0,DigCntr = 1,iSize = 0;
    printf("\n");

    if (iNo1 != iNo2)
    {
        printf("Enter same no of columns and row to proceed with the pattern \n");
        return;
    }
    for(iCnt1=1;iCnt1<=iNo1;iCnt1++)
    {  
        DigCntr = iSize;
        for(iCnt2=1;iCnt2<=iNo2;iCnt2++)
        {
            if((iCnt1==iNo1 && iCnt2==iNo1) || (iCnt1==1 && iCnt2==1)  ||  (iCnt1==iNo1 && iCnt2==1) || (iCnt1==1 && iCnt2==iNo1) )
            {
                printf("\t");
            }
            else if((iCnt1==iNo2 || iCnt1 ==1) || (iCnt2==iNo2 || iCnt2 ==1))
            {
                printf("*\t");
            }
            else
            {   
                if(DigCntr > 9)
                {
                    DigCntr = 1;
                }
                printf("%d\t",DigCntr);
                DigCntr++;
            }
        }
        printf("\n");
        iSize++;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;;

    printf("Enter the no of rows : \n");
    scanf("%d",&iValue1);


    printf("Enter the no of columns : \n");
    scanf("%d",&iValue2);

    ComPattern(iValue1,iValue2);

    return 0;
}