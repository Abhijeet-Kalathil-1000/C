#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   DisplayFactors
//  Description         :   Displays factors of given decimal number
//  Input               :   Integer
//  Output              :   Integer
//  Author              :   Abhijeet Saji Kalathil
//  Date                :   25/04/2022
//
//////////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
        {
            if ((iNo % iCnt) == 0)
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
        
    printf("Enter a number to check its factors : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input       :      -20
//  Output      :       1   2   4   5   10
//
//  Input       :       6
//  Output      :       1   2   3
//
//  Input       :       17
//  Output      :       1
//
//  Input       :       12
//  Output      :       1   2   3   4   6
//
//////////////////////////////////////////////////////////////////////////////////