// write a program which accepts distance in kilometer and convert it into meter.
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter =0;

    Meter = iNo * 1000;

    return Meter;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter kilometres");
    scanf("%d",&iValue);

    iRet =KMtoMeter(iValue);

    printf("meter is: %d\n", iRet);

    return 0;
}