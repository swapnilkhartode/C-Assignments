#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iLength)
{
    int iCnt =0, OddProduct=1;
    int iEvenNum=0;
    
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        if(  Arr[iCnt] % 2 !=0 )    
        {
            OddProduct = OddProduct * Arr[iCnt];
           
        }
        else
        {
            iEvenNum++;

        }
    }
    if(iEvenNum == iLength)  // Kadak line ( numbers madhe 1 hi odd nasel tar he product 0 return kart)
    {
        return 0;
    }
    else
    {
        return OddProduct;
    }
}

int main()
{
    int iSize = 0, i =0, iValue1=0,iValue2=0,iRet=0;
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

    for(i =0; i < iSize;i++)
    {
        printf("Enter element : %d\n",i+1);
        scanf("%d",&p[i]);
    }
    printf("\n");

    iRet = OddProduct(p,iSize);

    printf("Product is : %d\n",iRet);

    free(p);
    return 0;
}