#include<stdio.h>
/*
Std ->time
1 ->8
2 ->9
3 ->10
4 ->11
5 ->12
*/

int main()
{

    auto int iStd = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iStd);

    if (iStd == 1)
    {
        printf("Your exam is at 8 am\n");
    }

    else if (iStd == 2)
    {
        printf("Your exam is at 9 am\n");
    }
    
    else if (iStd == 3)
    {
        printf("Your exam is at 10 am\n");
    }
    
    else if (iStd == 4)
    {
        printf("Your exam is at 11 am\n");
    }
    
    else if (iStd == 5)
    {
        printf("Your exam is at 12 am\n");
    }
    else
    {
        printf("Lucky ! No exam for you\n");
    }

    return 0;
}