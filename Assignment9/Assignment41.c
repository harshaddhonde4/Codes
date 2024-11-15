/*
Write a program which Accepts Radius of Circle from the user and calculates its Area

Area = Pi *radius * radius
*/

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    double dRet = 0;
    float fValue = 0; 

    printf("Enter the Radius :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The Area of Circle is :%lf", dRet);

    return 0;
}/*
Write a program which Accepts Radius of Circle from the user and calculates its Area

Area = Pi *radius * radius
*/

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    double dRet = 0;
    float fValue = 0; 

    printf("Enter the Radius :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The Area of Circle is :%lf", dRet);

    return 0;
}