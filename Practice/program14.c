//Prgramm to display 5 times Helllo on screen with loop

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < 5;iCnt++)
    {
        printf("Hello\n");  
    }
}


int main()
{
    Display();

    return 0;
}