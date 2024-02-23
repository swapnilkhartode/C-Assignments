#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)    // 4
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter the element to findout the index of first occurance : \n");
    scanf("%d",&iValue);


    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        printf("Enter element : %d\n",i+1);
        scanf("%d",&ptr[i]);
    }

   
    // Step 4 : Call the function
    iRet = CheckOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
         printf("%d is occured in the array at index %d\n",iValue,iRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}