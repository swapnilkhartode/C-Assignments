// Write a program which accept two number from and check whether numbers are equal or not.
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2=0;
    BOOL bRet = FALSE;

    printf("Enter the First number :");
    scanf("%d",&iValue1);

    printf("Enter the Second number :");
    scanf("%d",&iValue2);

    bRet= ChkEqual(iValue1,iValue2);
    if(bRet == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;

}