/*
Write A Program which Accepts file Name from the user and creates that File
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{   
    int fd = 0;
    char Name[30];

    printf("Enter the Name of the File that you want to create :\n");
    scanf("%[^'\n']s", Name);

    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("Unable to create the File\n");
    }
    else
    {
        printf("File created Succcessfully with FD : %d\n", fd);
    }
    return 0;
}