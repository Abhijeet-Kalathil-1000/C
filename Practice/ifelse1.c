#include<stdio.h>

int main()
{
    auto int Marks = 0;

    printf("Enter your marks :\n");
    scanf("%d",&Marks);

    printf("Your Marks : %d\n",Marks);

    if(Marks>=60 && Marks<100)
    {
        printf("First class\n");
    }
    else
    {
        printf("Not a first class\n");
    }


    return 0;
}