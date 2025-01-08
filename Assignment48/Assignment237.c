/*
Write which counts the small characters from the file
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char Name[])
{
    int fd = 0, iCountSmall = 0, iRet = 0;
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
        if(Content[0] >= 'a' && Content[0] <= 'z')
        {
            iCountSmall++;
        }
    }

    return iCountSmall;
}

int main()
{       
    int iRet = 0;
    char Name[30];

    printf("Enter the Name File Name :\n");
    scanf("%[^'\n']s", Name);

    iRet = CountSmall(Name);

    printf("The Count of Small Letters is : %d\n", iRet);

    return 0;
}