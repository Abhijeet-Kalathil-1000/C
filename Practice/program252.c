#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

void FileConcat(char Source[],char Destination[])
{
    int fdSrc = 0,fdDest = 0;
    int iRet = 0;
    char Buffer[FILESIZE];

    fdSrc = open(Source,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }
    
    fdDest = open(Destination,O_RDWR | O_APPEND);
    if(fdDest == -1)
    {
        printf("Unable to open destination file\\n");
        return;
    }

    while((iRet = read(fdSrc,Buffer,FILESIZE)) != 0)
    {
        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdDest);

    printf("Data succesfully copied");

}

int main()
{
    char Fname1[20],Fname2[20];

    printf("Enter the name of file to open\n");
    scanf("%s",Fname1);


    printf("Enter the file name to create\n");
    scanf("%s",Fname2);
    
    FileConcat(Fname1,Fname2);

    return 0;
}