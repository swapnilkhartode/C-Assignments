#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if ((ch >= 'a' && ch <= 'z'))
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

    char cValue = '\0'; 
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);
    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Case Character");
    }
    else
    {
        printf("It is not a Small Case Character");
    }

    return 0;



}


