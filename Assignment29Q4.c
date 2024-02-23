#include<stdio.h>
#include<stdlib.h>

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

int SecMaximum(PNODE First)
{
    int iMax1 = First->data;
    int iMax2 =iMax1;
   
    while(First != NULL )
    {
        if((First->data) > iMax1)
        {
            iMax2=iMax1;
            iMax1 = First->data;
        } 
        First= First->next;   
    }
    return iMax2;

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

    iRet = SecMaximum(Head);
    

    printf("Second maximum  element from singly LL is : %d\n",iRet);
}

