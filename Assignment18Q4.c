#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    
    if(iNo < 0)      // Updator    , filter mhanje return ast tyat
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt < 5 ;iCnt++)
    {
        if(iCnt == 1)
        {
            printf("#\t");
        }
       
        if((iCnt > 0) && (iCnt  < 4))
        {
            
            printf("%d\t*\t#\t",iCnt);  
        }

        if(iCnt == 4)
        {
            printf("%d\t*",iCnt);
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