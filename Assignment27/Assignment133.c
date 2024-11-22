/*
Accept a String from the user and count the difference between the frequency of Capital Letters
and small Letters

Example :
Input   :   MarvellouS
Output  :   6   (8-2)
*/

#include<stdio.h>

int FreqDifference(char *ptr)
{
    int iFreqCaptial = 0, iDifference = 0, iFreqSmall = 0;

    while(*ptr != '\0')
    {
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            iFreqCaptial++;
        }
        else if(*ptr >= 'a' && *ptr <= 'z')
        {
            iFreqSmall++;
        }

        ptr++;
    }

    iDifference = iFreqSmall - iFreqCaptial ;
    return iDifference;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = FreqDifference(Arr);
    printf("The difference between the frequency of capital and small letters is : %d\n", iRet);

    return 0;

}