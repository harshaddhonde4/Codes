/*
Write which counts the small characters from the file
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountCharacter(char Name[], char cTar)
{
    int fd = 0, iCount = 0, iRet = 0;
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
        if(Content[0] == cTar)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{       
    int iRet = 0;
    char Name[30];
    char cTar = '\0';

    printf("Enter the Name File Name :\n");
    scanf("%[^'\n']s", Name);

    getchar();  //To Clear I/P Buffer

    printf("Enter the Target Charcater :\n");
    scanf("%c", &cTar);

    iRet = CountCharacter(Name, cTar);

    printf("The Count of %c is : %d\n",cTar, iRet);

    return 0;
}