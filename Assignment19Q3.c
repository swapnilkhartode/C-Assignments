#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;
    
    if(iRow < 0)      // Updator    , filter mhanje return ast tyat
    {
        iRow = -iRow;
    }

    if(iCol < 0)      
    {
        iCol = -iCol;
    }

    for(i = iRow ; i > 0 ;i--)
    {
        for(j=iCol ; j > 0 ; j--)
        {
            printf("%d\t",j);
        } 
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2=0;

    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of Column :\n");
    scanf("%d",&iValue2);


    Pattern (iValue1,iValue2);

    return 0;
}