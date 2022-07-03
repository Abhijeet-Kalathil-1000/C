#include<stdio.h>

int main()
{

    auto int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    if((iAge >=0) && (iAge<=10))
    {
        printf("Entry fee is 100 rps\n");
    }

    else if((iAge > 10) && (iAge <= 40))
    {
        printf("Entry fee is 500 rps\n");
    }
 
    else if((iAge > 40) && (iAge <= 100))
    {
        printf("Entry fee is 300 rps\n");
    }
    else
    {
        printf("Wrong age entered, please check again\n");
    }
    return 0;
}