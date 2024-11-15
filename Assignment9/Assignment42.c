/*
Write A program which Accepts Width & Height of Rectangle form the user and calculates its Area

E.g: 
I/P :   5.3    9.78
O/P :   51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width:\n");
    scanf("%f", &fValue1);

    printf("Enter Height:\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("The Area of Rectangle is :%lf", dRet);

    return 0;
}