/*
Write A Program which Accepts String from the user and Copy that characters of the
String into the Another String by converting all the small charcaters into capital
case
*/

#include<stdio.h>

void StrCpyCap(char *Str1, char *Str2)
{
    int iCnt = 0;
    while(*Str1 != '\0')
    {
        if(*Str1 >= 'a' && *Str1 <= 'z')
        {
            Str2[iCnt] = *Str1 - 32; 
        }
        else
        {
            Str2[iCnt] = *Str1;
        }
        Str1++;
        iCnt++;
    }

    Str2[iCnt] = '\0';

}

int main()
{   
    char Arr1[30];
    char Arr2[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr1);

    StrCpyCap(Arr1, Arr2);  //Call By Address

    printf("The Modified String is :%s\n", Arr2);

    return 0;
}