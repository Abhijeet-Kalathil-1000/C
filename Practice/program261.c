#include<stdio.h>

int CountSmallI(char *str)
{
    int smallCnt = 0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            smallCnt++;
        }
        str++;
    }
    return smallCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallI(Arr);

    printf("Count of saqmall char are : %d\n",iRet);

    return 0;
}