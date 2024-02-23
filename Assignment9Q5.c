// Write a program which returns differnce between even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact =1,iOddFact =1, iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt <= iNo; iCnt+=2 )
    {
        iEvenFact = iEvenFact *  iCnt;
    }

    for(iCnt =1; iCnt <= iNo; iCnt+=2 )
    {
        iOddFact = iOddFact *  iCnt;
    }
    return iEvenFact - iOddFact;
    
}

int main()
{
    int iValue =0, iRet =0;

    printf("enter number ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference  is %d",iRet);

    return 0;
}