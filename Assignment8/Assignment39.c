/*
Write a Program which Accepts Temperature in Farenheit and convert it into Celsius
1 Celsuis = (Farenheit - 32) * (5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{   
    double dCelsius = 0.0;
    dCelsius =((double)fTemp - (double)32) * ((double)5/(double)9);
    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Farenheit :\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f Farenheit = %lf Celsius\n", fValue, dRet);

    return 0;

}