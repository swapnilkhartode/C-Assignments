// Write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    if(iNo < 0)      // Updator    , filter mhanje return ast tyat
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}