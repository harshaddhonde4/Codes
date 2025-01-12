#include<stdio.h>

int main()
{   
    char Name[30];
    float fMonth = 499.00f;
    float fYear = (4788.00f / 12.00);
    float fDiscount = ((fMonth - fYear) / fMonth) * 100;
    float fRent = 0.0f, fCDiscount = 0.0f, fCost = 0.0f;
    
    printf("Discount on the Cost is : %.2f%%\n", fDiscount);

    printf("Enter the Name of a Product and Monthly Rent to find its comparative yearly cost at Nearly 20 Percent Discount:\n");

    printf("Enter the Product Name:\n");
    scanf("%[^'\n']s", Name);

    getchar(); 
    printf("Enter the Monthly Rent:\n");
    scanf("%f", &fRent);

    fCDiscount = (fDiscount / 100) * fRent;  
    // For 12 Months Package
    fCost = ((float)fRent * 12.00f) - ((float)fCDiscount * 12.00f);  

    printf("The Cost of Yearly Plan for %s will be: %.2f\n", Name, fCost);

    return 0;
}
