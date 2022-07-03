// File manipulation -open file and write data in file append

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
#define FILESIZE 1024

int WhiteSpace(char Fname[])
{
    char Data[FILESIZE];     //Mug
    int iRet =0,sum = 0, iCnt=0, spaceCnt=0;
    int fd = 0; //File Descriptor

    fd = open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(iCnt=0;iCnt<iRet;iCnt++)
        {
            if(Data[iCnt] == ' ')
            {
                spaceCnt++;
            }
        }
    }
    close(fd);
    return spaceCnt;
}

int main ()
{
    char Fname[20];
    int ret = 0;
 
    printf("enter file name to open\n");
    scanf("%s",Fname);

    ret = WhiteSpace(Fname);

    printf("Count of space is %d \n",ret);

    return 0;
}