#include<stdio.h>

void PatternAlphaR(int iNo)
{
    static int i =0;
    static char ch = 'a';

    if(i<iNo )
    {
        i++;
        PatternAlphaR(iNo);
        printf("%c\t",ch);
        ch++;
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