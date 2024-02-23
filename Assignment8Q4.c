// write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
    int iCnt =1;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = (-iNo);

    }

    while(iCnt <= 10)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
        iCnt++;
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}