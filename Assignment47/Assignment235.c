/*
write A Program which Accepts the file Name from the user and a string and append that
string to the end of the file
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{   
    int fd = 0, iRet = 0;
    char Name[30] = {'\0'};
    char Data[30] = {'\0'};

    printf("Enter the Name of the File that you want to open: \n");
    scanf("%s", Name);

    fd = open(Name, O_WRONLY | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File Opened SuccessFully with fd : %d\n", fd);
    }

    //clear I/P Buffer
    getchar();

    printf("Enter the String that you want to Append :\n");
    scanf("%[^'\n']s", Data);

    iRet = write(fd, Data, strlen(Data));
    printf("%d Bytes of Data Appended in file SuccessFully\n", iRet);

    close(fd);

    return 0;
}