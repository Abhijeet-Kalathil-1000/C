#include<stdio.h>

int CountSmallR(char *str)
{
    static int smallCnt = 0;

    if(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            smallCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return smallCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallR(Arr);

    printf("Count of small char are : %d\n",iRet);

    return 0;
}