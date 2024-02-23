#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int InsertFirst(PPNODE First, int No)
{
    // Allocate Memory
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    // Initialise
    newn->data =No;
    newn->next =NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n\n"); 
}

int SumDigit(int No)
{
    int rem =0,iSumDigit=0;
    int iDigit =No;
    while(iDigit != 0)
    {
        rem = iDigit % 10;
        iSumDigit = iSumDigit + rem;

        iDigit = iDigit / 10;
    }
    return iSumDigit;  
}

void DisplaySumDigit(PNODE First)
{
    int iRet=0;
    while(First != NULL)
    {
        iRet = SumDigit(First->data);
        printf("Addition of the digits of the %d is : %d\n",First->data,iRet);
        First = First -> next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet=0,iElement=0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,36);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    DisplaySumDigit(Head);

    return 0; 
}

