#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;
    
    if(iRow < 0)      
    {
        iRow = -iRow;
    }

    if(iCol < 0)      
    {
        iCol = -iCol;
    }

    for(i = 1 ; i <= iRow ;i++)
    {
        char ch = 'a';
        
        
        for(j=1 ; j <= iCol ; j++)
        {
            if(i % 2 !=0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",j);
                
            }
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