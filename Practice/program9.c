#include"header9.h"

/////////////////////////////////////////////////////////////
//  Write a Program to perform addition of 2 numbers.
/////////////////////////////////////////////////////////////
int main ()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter value for 1st element\n");
    scanf("%d",&iNo1);
    
    printf("Enter value for 2nd element\n");
    scanf("%d",&iNo2);

    iRet = Addition(iNo1,iNo2);
    printf("Additon is : %d\n",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////
//
//  Input :         11      10
//  Output :        21
//
/////////////////////////////////////////////////////////////