// INPUT : 4    4
/* OUTPUT : 
A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D
*/
#include<stdio.h>

void Display(int iNo1,int iNo2)
{
    int iCnt1 = 0,iCnt2 = 0;
    char ch='\0';

    if(iNo1!=iNo2)
    {
        printf("Enter same values for diagonal pattern printing\n");
        return;
    }
    for(iCnt1=1;iCnt1<= iNo1;iCnt1++)
    {
        for(iCnt2=1,ch='A';iCnt2 <= iNo2;iCnt2++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Please enter the no of row :\n");
    scanf("%d",&iValue1);
    
    printf("Please enter the no of column :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}