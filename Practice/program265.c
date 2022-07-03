#include<stdio.h>

void PatternAlphaI(int iNo)
{
    char cValue='a';
    int iCnt =0;

    while(iCnt<iNo)
    {
        printf("%c\t",cValue);
        cValue++;
        iCnt++;
    }
    printf("\n");   
}


int main()
{
    int iValue = 0,iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    PatternAlphaI(iValue);

    return 0;
}