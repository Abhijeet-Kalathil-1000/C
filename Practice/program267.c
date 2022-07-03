#include<stdio.h>

void PatternAlphaR(int iNo)
{
    static char cValue='a';

    if(iNo !=0 )
    {
        printf("%c\t",cValue);
        cValue++;
        iNo--;
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