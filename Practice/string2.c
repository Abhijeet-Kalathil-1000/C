/////////////////////////////////
//
//  Importing Header files
//
/////////////////////////////////

#include<stdio.h>
#include<string.h>

///////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////

int main()
{
    char Arr[5] = "abcd";
    char *ptr = Arr;
    int iSize=0;

    while(*ptr !='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
        iSize++;
    }
    printf("%d\n",iSize);
    //Aborting the programme after successfull execution
    return 0;
}