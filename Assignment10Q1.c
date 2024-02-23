#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    float fArea =0.0;

    fArea = PI  * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet =0.0;

    printf("Enter Radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f\n", dRet);

    return 0;
}