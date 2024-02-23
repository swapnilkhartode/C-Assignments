
#include<stdio.h>

double SquareMeter(float fNo)
{
    float SquareMeter =0.0;

    SquareMeter = 0.0929 * fNo;

    return SquareMeter;
}

int main()
{
    int iValue = 0.0;
    double dRet =0.0;

    printf("Enter the area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meter is: %f\n", dRet);

    return 0;
}