#include<stdio.h>

void PatternAlphaR(int iNo)
{
    static char cValue='a';
    static int iCnt =0;

    if(iCnt<iNo)
    {
        printf("%c\t",cValue);
        cValue++;
        iCnt++;
        PatternAlphaR(iNo);
    }
}


int main()
{
    int iValue = 0,iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    PatternAlphaR(iValue);

    printf("\n");   

    return 0;
}