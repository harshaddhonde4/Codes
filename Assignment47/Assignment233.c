/*
Write A Application which Accepts file Name from the User and display all the Contents of the file on Screen
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{   
    int fd = 0, iRet = 0;
    char Name[30];
    char Content[10];

    printf("Enter the Name of the File , whose Content is to be Read :\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the File!\n");
        
    }
    else
    {
        printf("File Opened SuccessFully with FD : %d\n", fd);
    }

    //To Read the Content form the File
    while((iRet = read(fd, Content, sizeof(Content))) != 0)
    {
        write(1, Content, iRet);
    }
    printf("\n");
    close(fd);
    return 0;
}