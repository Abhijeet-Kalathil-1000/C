// File manipulation -open file and return size of char in file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
int FileLen(char Fname[])
{
    char Data[10];     //Mug
    int iRet =0,sum = 0 ;
    int fd = 0; //File Descriptor

    fd = open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        sum = sum + iRet;
    }
    close(fd);

    return sum;
}

int main ()
{
    char Fname[20];
    int ret = 0;
 
    printf("enter file name to open\n");
    scanf("%s",Fname);

    ret = FileLen(Fname);

    printf("Size of string is %d \n",ret);

    return 0;
}