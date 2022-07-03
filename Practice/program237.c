// File manipulation -get name and create file 

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
    int fd = 0; //File Descriptor

    printf("enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("%s is siccessfully opened with FD %d \n",Fname,fd);
   

    return 0;
}