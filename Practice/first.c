#include<stdio.h>

extern int no;
int main()
{
    const int a = 10;

    int c = a+ a;
    printf("%d\n",c);   

    return 0;
}