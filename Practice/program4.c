#include<stdio.h>

int main ()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    printf("Enter value for 1st element\n");
    scanf("%d",&iNo1);
    
    
    printf("Enter value for 2nd element\n");
    scanf("%d",&iNo2);

    iNo3 = iNo1 + iNo2;

    printf("Additon is : %d\n",iNo3);

    return 0;
}