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

    switch (iStd)
    {
        case 1:
            printf("Your exam is at 8 am\n");
            break;

        case 2:
            printf("Your exam is at 9 am\n");
            break;
        
        case 3:
            printf("Your exam is at 10 am\n");
            break;
        
        case 4:
            printf("Your exam is at 11 am\n");
            break;
        
        case 5:
            printf("Your exam is at 12 am\n");
            break;

        default:
            printf("Lucky ! No exam for you\n");
            break;

    }

    return 0;
}