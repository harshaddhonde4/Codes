#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{   
    int fd = 0;
    char Name[30];

    printf("Enter the Name of the File that you want to open :\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the File\n");
    }
    else
    {
        printf("File Open SuccessFully with FD : %d\n", fd);
    }
    return 0;
}