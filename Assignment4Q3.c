// Write a program which accept number from user and display all its non factors.
#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;

    printf("Non Factors of given number :");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("\t%d",iCnt);

        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}