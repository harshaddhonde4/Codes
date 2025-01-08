/*
Write a Application which Accepts file Name and display size of file
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{   
    int fd = 0, iSize = 0, iRet = 0;
    char Name[30];
    char Content[30];

    printf("Please,Enter the Name of the File that you want to Open :\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the File\n");
        return 0;
    }
    else
    {
        printf("File Opened SuccessFullly with fd : %d\n", fd);
    }

    while((iRet = read(fd, Content, sizeof(Content))))
    {
        iSize += iRet;
    }
    printf("Size of the File is : %d Bytes\n", iSize);

    close(fd);
    
    return 0;
}