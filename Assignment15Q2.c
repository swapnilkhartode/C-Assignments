#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iEvenFrequency=0, iOddFrequency=0;
    int i=0;

    for(i=0; i< iLength;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEvenFrequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }
    return iEvenFrequency - iOddFrequency;
}

int main()
{
    int iSize = 0, iCnt =0, iRet =0;
    int *p=NULL;

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

    iRet = CountEven(p,iSize);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}