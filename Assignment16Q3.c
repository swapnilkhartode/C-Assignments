#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iPos = -1;
    //      1           2           3
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)    // 4
        {
            iPos = iCnt;
        }
    }
    return iPos;
}

int main()
{
    int iSize = 0, iCnt =0, iValue=0;
    int *p=NULL;
    int iRet = 0;

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

    iRet = LastOcc(p,iSize,iValue);

    printf("Result is : %d\n",iRet);

    free(p);
    return 0;
}