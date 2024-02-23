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

int Maximum(PNODE First)
{
    int iMax=0;
    
    while(First != NULL )
    {
        if(iMax < (First->data))
        {
            iMax = First->data;
            First = First->next;
        }
        else
        {
            First = First->next;
        }
    }   
    return iMax; 
}

int main()
{
    PNODE Head = NULL;
    int iRet=0,iElement=0;

    InsertFirst(&Head,101);  // (70,101)
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Maximum(Head);

    printf("Largest element from singly LL is : %d\n",iRet);
}

