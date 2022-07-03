// File manipulation -open file and write data in file append

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

// O_RDONLY    Read
// O_WRONLY    write
// O_RDWR  Read + Write

int main ()
{
    char Fname[20];
    char Data[10];     //Mug
    int iRet =0 ;
    int fd = 0; //File Descriptor

    printf("enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    printf("%s is successfully opened with FD %d \n",Fname,fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);

    return 0;
}