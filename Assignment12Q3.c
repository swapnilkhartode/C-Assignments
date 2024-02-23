#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit =0, iFrequency = 0;
    if(iNo < 0)
    {
        iNo = (-iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }
    return iFrequency;
}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;

}
