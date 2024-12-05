/*
Accept division of student from user and depends on the division display exam timing. 
There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
 (Application should be case insensitive)*/

#include<stdio.h>

void DisplayTime(char Divsion)
{
    if(Divsion == 'A' || Divsion == 'a')
    {
        printf("Exam Time : 7A.M.\n");
    }
    else if(Divsion == 'B' || Divsion == 'b')
    {
        printf("Exam Time : 8:30A.M.\n");
    }
    else if(Divsion == 'C' || Divsion == 'c')
    {
        printf("Exam Time : 9:20A.M.\n");
    }
    else if(Divsion == 'D' || Divsion == 'd')
    {
        printf("Exam Time : 10:30A.M.\n");
    }
    else
    {
        printf("Please, Enter Valid Input\n");
    }
}

int main()
{
    char cValue = '\0';
\
    printf("Enter the Division :\n");
    scanf("%c", &cValue);


    DisplayTime(cValue);
    
    return 0;
}