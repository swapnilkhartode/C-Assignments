// Write a  program which accept number from user  and check whether it contains  zero in it or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
     int iDigit=0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is No zero");
    }
    return 0;
}