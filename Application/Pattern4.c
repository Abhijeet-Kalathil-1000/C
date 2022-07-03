/*

                            A
                        A       B
                    A       B       C
                A       B       C       D
            A       B       C       D       E
        A       B       C       D       E       F
    A       B       C       D       E       F       G
A       B       C       D       E       F       G       H


*/

#include<stdio.h>
#include<stdlib.h>

void AlphaPattern(int iNo) //mirrored upper triangle matrix
{
    int iCnt1 = 0 ,iCnt2 = 0;
    char cValue = '\0';

    for(iCnt1=iNo;iCnt1>=1;iCnt1--)
    {
        
        for(iCnt2=1,cValue='A';iCnt2<=iNo;iCnt2++)
        {
            if(iCnt2<iCnt1)
            { 
                printf("\t");
            }
            else
            {
                printf("%c\t\t",cValue);
                cValue++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the no of letters you want to prinf : \n");
    scanf("%d",&iValue);

    AlphaPattern(iValue);

    return 0;
}