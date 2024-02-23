// Write a program which accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
    int iCnt =0;

    if(iEnd < iStart)
    {
        printf("Invalid Range\n");
    }

    for(iCnt =iEnd; ((iCnt >= iStart) && (iCnt <= iEnd) ); iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2=0;

    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}