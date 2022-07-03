#include<stdio.h>

int main()
{
char cValue = 'M';
char *cPtr = &cValue;

int iValue = 21;
int *iPtr = &iValue;

float fValue = 10.11;
float *fPtr = &fValue;

double dValue = 20.11;
double *dPtr = &dValue;

printf("cPtr size : %d",sizeof(dPtr));

return 0;
}