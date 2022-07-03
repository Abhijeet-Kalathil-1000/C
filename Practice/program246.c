// File manipulation -open file and return size of small case

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
int SmallCase(char Fname[])
{
    char Data[1024];     //Mug
    int iRet =0,sum = 0, iCnt=0, smallCnt=0;
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
            if((Data[iCnt] >= 'a')&&(Data[iCnt] <= 'z'))
            {
                smallCnt++;
            }
        }
    }
    close(fd);

    return smallCnt;
}

int main ()
{
    char Fname[20];
    int ret = 0;
 
    printf("enter file name to open\n");
    scanf("%s",Fname);

    ret = SmallCase(Fname);

    printf("Count of small case is %d \n",ret);

    return 0;
}