/*
Write which counts the small characters from the file
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountWhiteSpaces(char Name[])
{
    int fd = 0, iCountSpace = 0, iRet = 0;
    char Content[1];

    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Open the File\n");
        return -1;
    }
    else
    {
        printf("File Opened SuccessFully with fd : %d\n", fd);
    }

    while((iRet = read(fd, Content, 1)) != 0)
    {
        if(Content[0] == ' ')
        {
            iCountSpace++;
        }
    }

    return iCountSpace;
}

int main()
{       
    int iRet = 0;
    char Name[30];

    printf("Enter the Name File Name :\n");
    scanf("%[^'\n']s", Name);

    iRet = CountWhiteSpaces(Name);

    printf("The Count of WhiteSpaces is : %d\n", iRet);

    return 0;
}