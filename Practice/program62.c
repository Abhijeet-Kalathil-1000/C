#include<stdio.h>

int main()
{
    auto int Arr[5];
    int iCnt = 0;
    
    printf("Enter elements : \n");
    
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Entered elements are : \n");
    
    printf("%d  ",Arr[0]);
    printf("%d  ",Arr[1]);
    printf("%d  ",Arr[2]);
    printf("%d  ",Arr[3]);
    printf("%d  ",Arr[4]);
    
    return 0;
}