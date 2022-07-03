#include<stdio.h>


void DisplayI(int no)
{
    while (no != 0)
    {
        printf("%d\t",no%10);
        no = no /10;    
    }
}

void DisplayR(int no)
{
    if(no != 0)
    {
        no = no /10;    
        DisplayR(no);
        printf("%d\t",no%10);
    }
}

int main()
{
    DisplayI(1234);
    printf("\n");
    DisplayR(12345);

    return 0;
}