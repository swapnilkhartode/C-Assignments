#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iLength)
{
    int i =0, iMin = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iCnt =0, iValue=0;
    int *p=NULL;
    int iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    iRet = Check(p,iSize);

    printf("The Smallest number is : %d\n",iRet);

    free(p);
    return 0;
}