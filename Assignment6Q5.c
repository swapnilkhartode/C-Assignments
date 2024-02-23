// Write a program which accept total marks and obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(float fNo1,float fNo2)
{
    float fPercent=0;
    if(fNo1 == 0)
    {
        
        return;
    }
    else
    {
        fPercent = (fNo1 / fNo2)*100;

    }
    return fPercent;

}

int main()
{
    int iValue1 = 0, iValue2=0;
    float fRet = 0.0;

    printf("Enter the obtained Marks :");
    scanf("%d",&iValue1);

    printf("Enter the Total Marks:");
    scanf("%d",&iValue2);

    fRet= Percentage(iValue1,iValue2);

    printf("percentage is : %f",fRet);

    return 0;
}

