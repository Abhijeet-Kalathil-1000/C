//Prgramm to display 5 times Helllo on screen with loop

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

   
//  Updater : it changes the data to expected entry if unexpected entry found.
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 0 ; iCnt < iNo ; iCnt++)
    {
        printf("Hello\n");  
    }
}

int main()
{
    int iValue =0;

    printf("Enter not of itterations\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}