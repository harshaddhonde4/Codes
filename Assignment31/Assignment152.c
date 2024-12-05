/*
Write A Program which Accepts a String from the user and copy all the charcater of the 
String Except the Whitspcaces
*/

#include<stdio.h>

void CopyStr(char *Arr1, char *Arr2)
{
    char *Start = Arr1;
    char *End = Arr1;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    int iCnt = 0;
    while(Start <= End)
    {
        if(*Start != ' ')
        {
            Arr2[iCnt] = *Start;
            iCnt++;
        }
        Start++;
        
    }

    Arr2[iCnt] = '\0'; //Indicates the Termination of the String
}

int main()
{   
    char Arr1[30];
    char Arr2[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr1);

    CopyStr(Arr1, Arr2);

    printf("The String Copied in another Array without Blankspace is :%s\n",Arr2);
    return 0;
}