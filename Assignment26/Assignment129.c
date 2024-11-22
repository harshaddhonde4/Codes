/*
Accept a character from the user and display its ASCII value in decimal, octal, and hexadecimal Format
Example :
Input   :   A
Output  :   
            Decimal :   65
            octal   :   0101
            Hexadecimal :0X41
*/

#include<stdio.h>


void Display(char ch)
{
    printf("Decimal Value of Entered Character is : %d\n", ch);
    printf("Octal Value for the Entered Charcater is : %o\n", ch);
    printf("HexaDecimal Value for the Entered Charcater is : %X\n", ch);
}

int main()
{
    char cValue = '\0';


    printf("Enter the Character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    
    return 0;
}