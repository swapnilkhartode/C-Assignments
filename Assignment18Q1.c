#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    char ch ='A';
    
    if(iNo < 0)      // Updator    , filter mhanje return ast tyat
    {
        iNo = -iNo;
    }

    for(i = 1 ; i <= iNo ;i++)
    {
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern (iValue);

    return 0;
}