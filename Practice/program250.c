// File manipulation -open file and write data in file append

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
#define FILESIZE 1024

void CaseCounter(char Fname[])
{
    char Data[FILESIZE];     //Mug
    int iRet =0,sum = 0, iCnt=0, CapCnt=0,smallCnt=0;
    int fd = 0; //File Descriptor

    fd = open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(iCnt=0;iCnt<iRet;iCnt++)
        {
            if((Data[iCnt] >= 'A')&&(Data[iCnt] <= 'Z'))
            {
                CapCnt++;
            }
            if((Data[iCnt] >= 'a')&&(Data[iCnt] <= 'z'))
            {
                smallCnt++;
            }   
        }
    }
    printf("Cspital is : %d\n",CapCnt);
    printf("Small is : %d\n",smallCnt);
    close(fd);
}
int main ()
{
    char Fname[20];
     
    printf("enter file name to open\n");
    scanf("%s",Fname);

    CaseCounter(Fname);

    return 0;
}