#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    
    if(iNo < 0)      // Updator    , filter mhanje return ast tyat
    {
        iNo = -iNo;
    }

    for(iCnt = 2 ; iCnt <= (iNo*2) ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n\n");

}  

int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern (iValue);

    return 0;
}