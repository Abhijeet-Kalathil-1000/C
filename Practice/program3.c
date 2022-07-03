#include<stdio.h>

int main ()
{
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter value for 1st element\n");
    scanf("%d",&i);
    
    
    printf("Enter value for 2nd element\n");
    scanf("%d",&j);

    k = i + j;

    printf("Additon is : %d\n",k);

    return 0;
}