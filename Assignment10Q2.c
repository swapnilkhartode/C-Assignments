// Write a program which accept width and height of rectangle from user and calculate its area.

#include<stdio.h>

double RectArea(float fwidth, float fheight)
{
    float fArea =0.0;

    fArea = fwidth * fheight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 =0.0;
    double dRet =0.0;

    printf("Enter width");
    scanf("%f",&fValue1);

    printf("Enter height");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is : %f\n", dRet);

    return 0;
}
