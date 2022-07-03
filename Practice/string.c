/////////////////////////////////
//
//  Importing Header files
//
/////////////////////////////////

#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////////////
//  
//  Function name :     FunStrlen
//  Input :             Adress of Character Array
//  Output :            Length of string in integer
//  Description :       It is used to calculate length of string
//  Author :            Abhijeet Saji Kalathil
//  Date :              06/02/2022
//
///////////////////////////////////////////////////////////////////
int FunStrlen(const char *str)
    {
        int iSize = 0;
        while(*str != '\0')
        {
            iSize++;
            str++;
        }
        return iSize;
    }

///////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////

int main()
{
    int iCount = 0;
    //First way
    char Arr[5]={'a','b','c','d','\0'};

    //Second way
    char Brr[9]={'\0'};

    printf("Enter your Name : \n");
    scanf("%s",Brr);

    //Printing values on console
    printf("%s\n",Arr);
    printf("%s\n",Brr);

    //Printing size of values on console
    printf("Size of Arr : %d\n",sizeof(Arr));
    printf("Size of Brr : %d\n",sizeof(Brr));

    //Printing length of values on console
    printf("Length of String Arr : %d\n",FunStrlen(Arr));
    printf("Length of String Brr : %d\n",FunStrlen(Brr));

    //Logic using For loop to print each char of Brr
    for(iCount=0;iCount<FunStrlen(Brr);iCount++)
    {
    printf("%c\n",Brr[iCount]);
    }

    //Aborting the programme after successfull execution
    return 0;
}