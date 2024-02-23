// write a program which accepts number from user and print all odd numbers up to this number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt= 1; iCnt<= iNo; iCnt++)
    {
        if(iCnt % 2 !=0)
        {
            printf("%d\t",iCnt);
        }
        else
        {
            printf("");

        }
    }
}

int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}