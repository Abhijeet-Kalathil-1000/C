/*

5   4   3   2   1
4   3   2   1   
3   2   1
2   1
1

*/

#include<stdio.h>
#include<stdlib.h>

void RevNOPattern(int iNo) //mirrored upper triangle matrix
{
    int iCnt1 = 0 ,iCnt2 = 0, iSize = 0;

    iSize = iNo;

    for(iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        for(iCnt2=iSize;iCnt2>=1;iCnt2--)
        {
            printf("%d",iCnt2);
        }
        printf("\n");
        iSize--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the no of rows you need : \n");
    scanf("%d",&iValue);

    RevNOPattern(iValue);

    return 0;
}