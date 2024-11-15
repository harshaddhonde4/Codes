/*
Accept an charcater from the user and check whaether it is vowel or not
*/

#include<stdio.h>
#include<ctype.h>

typedef int BOOL;
#define True 1
#define False 0

BOOL VowelCheck(char cValue)
{
    if(cValue == tolower(cValue))  //Updator
    {
        cValue = toupper(cValue);
    }

    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return True;
    }

    else
    {
        return False;
    }

}

int main()
{
    char ch = '\0';
    BOOL bRet = False;

    printf("Enter the charcater which is to be checked if vowel or not:\n");
    scanf("%c", &ch);

    bRet = VowelCheck(ch);

    if(bRet == True)
    {
        printf("True\n");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}