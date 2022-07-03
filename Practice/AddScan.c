#include<stdio.h>

int Add(int No1,int No2)
{
    int Ans = 0;
    Ans = No2 + No1;

    return Ans;
}

int main()
{
    int A=0,B=0,C=0;

    printf("Enter 1st element : ");
    scanf("%d",A);

    printf("Enter 2nd element : ");
    scanf("%d",B);

    C = Add(A,B);
    printf("Addition of element is %d",C);
    
    return 0;
}