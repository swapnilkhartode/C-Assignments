// Write a program which accepts one number from user and print that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    printf("Even numbers are :\n");
    for(int i = 1; i <= (iNo*2); i++)
    {
        
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return;
        

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}