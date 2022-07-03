#include<stdio.h>

void DisplayR(char *str)
{
    if(*str !='\0')
    {
        DisplayR(str+1);
        printf("%s\n",str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    DisplayR(Arr);   
    return 0;
}