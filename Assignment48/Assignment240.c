/*
Write A Program which Accepts file Name and one count from the user and read that Number of Charcaters 
from the Starting Position
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char Name[], int Count)
{
    int fd = 0, iRet = 0;
    char Content[Count];
    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    else
    {
        printf("File Opened SuccessFully with fd : %d\n", fd);
    }

    iRet = read(fd, Content, Count);

    if(iRet == -1)
    {
        printf("Unable to read the File\n");
        return;
    }

    write(1, Content, iRet);
    
    printf("\n");
}

int main()
{   
    char Name[30];
    int iCount = 0;

    printf("Enter the File Name :\n");
    scanf("%[^'\n']s", Name);

    printf("Enter the Count of Characters You Want to Display :\n");
    scanf("%d", &iCount);

    Display(Name, iCount);

    return 0;
}