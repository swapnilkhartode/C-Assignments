#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i =0, iCnt=0, rem = 0, iSum=0;
    for(i=0; i < iLength ; i++)
    {
        iSum =0;
        while(Arr[i] != 0)
        {
            rem = Arr[i] % 10;
            iSum = iSum + rem;
            Arr[i] = Arr[i] / 10;
        }
        printf("%d\t",iSum);

    }
}

int main()
{
    int iSize = 0, iCnt =0, iValue=0;
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
    printf("\n");

    Digits(p,iSize);

    free(p);
    return 0;
}