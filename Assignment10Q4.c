
#include<stdio.h>

double FhtoCs(float fNo)
{
    float Celsius =0.0;

    Celsius = ((fNo - 32) * 5)/9 ;

    return Celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet =0.0;

    printf("Enter Farhrenheit :");
    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);

    printf("Celsius is: %lf\n", dRet);

    return 0;
}