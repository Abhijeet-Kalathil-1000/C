// File manipulation -get name and create file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//Read : 4
//Write: 2
//Execute :1

int main ()
{
    char Fname[20];
    char data[100];
    int iRet = 0;

    int fd = 0; //File Descriptor

    printf("enter file name to create\n");
    scanf("%s",Fname);

    printf("Enter the data that you want ot write\n");
    scanf(" %[^'\n']s",data);

    fd = creat(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("%s is siccessfully created wiht FD %d \n",Fname,fd);

    iRet = write(fd,data,strlen(data));

    printf("%d bytes sucessfully written in the file\n",iRet);
    

    return 0;
}