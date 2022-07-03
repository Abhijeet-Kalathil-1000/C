//Program to display 1 to 5 on screen using for
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    for(iCnt = 1 ; iCnt <= iNo ;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter no of itteration you need : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


