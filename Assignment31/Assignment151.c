/*
Write A Program which Accepts String from the User and Copy that Charcter of String into Another
String in Reverse Order
*/

#include<stdio.h>

void CopyRev(char *Arr1, char *Arr2)
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
        Arr2[iCnt] = *End;
        End--;
        iCnt++;
    }

}
int main()
{   
    char Arr1[30];
    char Arr2[30];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", Arr1);

    CopyRev(Arr1, Arr2);

    printf("The Reverse String in Another Array is :%s\n", Arr2);
    return 0;
}