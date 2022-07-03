// File manipulation -get name and create file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main ()
{
    char Fname[20];
    int fd = 0; //File Descriptor

    printf("enter file name to create\n");
    scanf("%s",Fname);

    fd = open(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("%s is siccessfully created wiht FD %d \n",Fname,fd);

    return 0;
}