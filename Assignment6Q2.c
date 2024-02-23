// Write a program which accept number from user and check whether that number is greater than 100 or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if(iNo < 100)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter the number :");
    scanf("%d",&iValue);

   bRet= ChkGreater(iValue);

    if(bRet == 0)
    {
        printf("Smaller");
    }
    else
    {
        printf("Greater");
    }

    return 0;
}