//Program to display addition of n number

/*
    ALGORITHM :

    START
        Accespt number from user as NO
        Check whether that nmumber is negative or not
        If it is negative then convert it to positive.

        Create one variable as Sum and set it to 0
        create one variable Cnt and set it to 1

        Iterate till Cnt is less that or equal to No
            Add the vlaue of cn into the variable sum
            increment the value of cnt by 1
        Loop

        Display the vlaue of Sum
    END
*/
#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter no of itteration you need : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Sum of digits is : %d\n",iRet);

    return 0;
}


