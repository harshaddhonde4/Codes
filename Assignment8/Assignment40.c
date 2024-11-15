/*
Write A program which Accepts Area in Square Feet and Convert it into Square Metre
1 Square Feet   =   0.0929  Square Metre

Example :

I/P :   5
O/P :   0.464515
*/

#include<stdio.h>

double SquareMetre(float iSqarFeet)
{
    double dSqarMetre = 0.0;
    dSqarMetre = iSqarFeet * 0.0929;
    return dSqarMetre;
}

int main()
{   
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter the Square Feet Area  :\n");
    scanf("%f", &fValue);

    dRet = SquareMetre(fValue);

    printf("%f Square Feet = %lf Square Metre\n", fValue, dRet);

    return 0;
}