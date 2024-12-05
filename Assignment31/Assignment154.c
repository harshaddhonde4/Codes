/*
Write A Program which Accepts String from the user and Copy that characters of the
String into the Another String by converting all the capital charcaters into Small
case
*/
#include<stdio.h>

void StrCpySmall(char *Str1, char *Str2)
{   
    int iCnt = 0;

    while(*Str1 != '\0')
    {
        if(*Str1 >= 'A' && *Str1 <= 'Z')
        {
            Str2[iCnt] = *Str1 + 32;
        }
        else
        {
            Str2[iCnt] = *Str1;
        }
        iCnt++;
        Str1++;
    }

    Str2[iCnt] = '\0';
}

int main()
{   
    char Arr1[30];
    char Arr2[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr1);

    StrCpySmall(Arr1, Arr2);

    printf("The Modified string is :%s\n", Arr2);

    return 0;
}