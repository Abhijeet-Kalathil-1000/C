#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   SumOfFactors
//  Description         :   Displays Sum of factors of given decimal number
//  Input               :   Integer
//  Output              :   Integer
//  Author              :   Abhijeet Saji Kalathil
//  Date                :   25/04/2022
//
//////////////////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

//////////////////////////////////////////////////////////////////////////////////
//  Updater : to convert negative input
//////////////////////////////////////////////////////////////////////////////////

    if(iNo < 0)         
    {
        iNo = -iNo;
    }
//////////////////////////////////////////////////////////////////////////////////
//  Time complexity : N/2
//////////////////////////////////////////////////////////////////////////////////

    for(iCnt = 1;((iCnt <=(iNo/2) && (iSum <= iNo)));iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}



//////////////////////////////////////////////////////////////////////////////////
//Accept number from user and display its factors
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
        
    printf("Enter a number to check its factors : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is a perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input       :      10
//  Output      :      10 is not a perfect number
//
//  Input       :      6
//  Output      :      6 is not a perfect number
//
//////////////////////////////////////////////////////////////////////////////////