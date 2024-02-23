#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int InsertFirst(PPNODE First, int No)
{
    // Allocate memory
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    // Initialise the node
    newn->data = No;
    newn->next = NULL;

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

int Reverse(int No)
{
    int rem=0;
    int iDigit2=0,iReverse=0;

    while(No != 0)
    {
        rem = No % 10;
        iReverse = iReverse * 10 + rem;
        No = No / 10;
    }
    return iReverse;
}
void DisplayReverse(PNODE First)
{
    int iRet=0 ,N1=0,N2=0;
    
    while(First != NULL)
    {
        iRet = Reverse(First->data);
        printf("| %d | -> ",iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);
    DisplayReverse(Head);
    
    return 0;
}