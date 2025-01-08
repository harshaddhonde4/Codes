/*
Write A Program which Accepts file Name from the user and count the capital letters from the file
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char Name[])
{   
    int fd = 0, iRet = 0, iCountCapital = 0;
    char Content[1];
    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Open the file\n");
        return -1;
    }
    else
    {
        printf("File Opened SuccessFully with fd : %d\n", fd);
    }

    while((iRet = read(fd, Content, 1)) != 0)
    {
        if(Content[0] >= 'A' && Content[0] <= 'Z')
        {
            iCountCapital++;
        }
    }

    return iCountCapital;
}

int main()
{   
    int iRet = 0;
    char Name[30] ={'\0'};

    printf("Enter the Name of the File you want to open :\n");
    scanf("%[^'\n']s", Name);

    iRet = CountCapital(Name);

    printf("The Count of Capital Letters is : %d\n", iRet);

    return 0;
}