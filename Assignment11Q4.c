// Write a program which accept range from user and display all even numbers in between that range.

#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt =0, iSum=0;
    
    if((iEnd < iStart) || (iStart < 0))
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt =iStart; ((iCnt >= iStart) && (iCnt <= iEnd) ); iCnt++)
    {
        
        if(iCnt % 2 ==0 )
        {
            iSum = iSum + iCnt; 
        }  
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2=0, iRet =0;

    printf("Enter Starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    iRet= RangeSumEven(iValue1,iValue2);
    printf("Addition of even numbers is : %d\n",iRet);

    return 0;
}