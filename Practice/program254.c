#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd=0;
    char Data[10];

    printf("Enter the name of file\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }

//  lseek(file_desc,size,position)    

// 0    start pos
// 1    current pos
// 2    end pos

    lseek(fd,10,0);

    read(fd,Data,5);

    write(1,Data,5);

    return 0;
}