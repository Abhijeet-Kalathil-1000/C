#include<stdio.h>

void PatternAlphaR(int iNo)
{
    static int i =0;

    if(i<iNo )
    {
        printf("%c\t",'a'+i);
        i++;
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