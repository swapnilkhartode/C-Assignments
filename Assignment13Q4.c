#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit =0, iMult = 1;
    if((iNo < 0))
    {
        iNo = (-iNo);
    }
    if((iNo == 0))
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit =1;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}
