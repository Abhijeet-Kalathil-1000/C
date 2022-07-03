// File manipulation -open file and write data in file append

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
 
void DisplayData(char Fname[])
{
    char Data[10];     //Mug
    int iRet =0,sum = 0 ;
    int fd = 0; //File Descriptor

    fd = open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return;
    }
    printf("%s is successfully opened with FD %d \n",Fname,fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        sum = sum + strlen(Data);
        write(1,Data,iRet);
    }
    close(fd);

    printf("Size of string is %d \n",sum);
}

int main ()
{
    char Fname[20];
 
    printf("enter file name to open\n");
    scanf("%s",Fname);

    DisplayData(Fname);

    return 0;
}