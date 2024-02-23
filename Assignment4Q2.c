//  Write a program which accepts number from user and display its factor in decreasing order.

#include<stdio.h>

void FactRev(int iNo)
{
   int iCnt = (iNo /2);
   printf("Display factors in decreasing order :");
    for(iCnt; iCnt <= (iNo/2); iCnt--)
    {
        if(iNo % iCnt ==0)
        {
            printf("\t%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d", &iValue);
     
     FactRev(iValue);

     return 0;
}