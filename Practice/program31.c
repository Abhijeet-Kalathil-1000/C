#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   DisplayNonFactors
//  Description         :   Displays Non-factors of given decimal number
//  Input               :   Integer
//  Output              :   Integer
//  Author              :   Abhijeet Saji Kalathil
//  Date                :   25/04/2022
//
//////////////////////////////////////////////////////////////////////////////////

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <(iNo);iCnt++)

//  Time complexity : N
        {
            if ((iNo % iCnt) != 0)
            {
                printf("%d  ",iCnt);
            }
        }
}

//////////////////////////////////////////////////////////////////////////////////
//Accept number from user and display its factors
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
        
    printf("Enter a number to check its non-factors : ");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input       :       5
//  Output      :       2   3   4
//
//////////////////////////////////////////////////////////////////////////////////