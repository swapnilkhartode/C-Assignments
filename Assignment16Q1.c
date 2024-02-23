#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int i =0, iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
}

int main()
{
    int iSize = 0, iCnt =0, iValue=0;
    int *p=NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt =0; iCnt < iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("\n");

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number  is Present"); 
    }
    else
    {
        printf("Number is Absent");
    }


    free(p);
    return 0;
}