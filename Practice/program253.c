#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[],char Destination[])
{
    int fdSrc = 0,fdDest = 0;
    int iRet1 = 0,iRet2 = 0;
    char Buffer1[FILESIZE],Buffer2[FILESIZE];
    int iCmp = 0;

    fdSrc = open(Source,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return false;
    }
    
    fdDest = open(Destination,O_RDONLY);
    if(fdDest == -1)
    {
        printf("Unable to open destination file\\n");
        return false;
    }

    while(1)
    {
        iRet1 = read(fdSrc,Buffer1,FILESIZE);
        iRet2 = read(fdDest,Buffer2,FILESIZE);

        if((iRet1 == 0) || (iRet2 == 0) || (iRet1 != iRet2))
        {
            break;
        }

        iCmp = memcmp(Buffer1,Buffer2,iRet1);
        if(iCmp != 0)
        {
            break;
        }
    }
    
    close(fdSrc);
    close(fdDest);

    if(iRet1 == 0 && iRet2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Fname1[20],Fname2[20];

    bool bRet;

    printf("Enter the name of 1st Source file\n");
    scanf("%s",Fname1);


    printf("Enter the file name to 2nd source file\n");
    scanf("%s",Fname2);
    
    bRet = FileCompare(Fname1,Fname2);

    if(bRet == true)
    {
        printf("Both files have same content\n");
    }
    else
    {
        printf("Files have different content\n");
    }

    return 0;
}