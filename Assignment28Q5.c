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

int Minimum(PNODE First)
{
    int iMin=First->data;
    
    while(First != NULL )
    {
        if(iMin > (First->data) )
        {
            iMin = First->data;
            First = First->next;
        }
        else
        {
            First = First->next;
        }
    }   
    return iMin; 
}

int main()
{
    PNODE Head = NULL;
    int iRet=0,iElement=0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,2);  // (70,101)
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);

    iRet = Minimum(Head);

    printf("Smallest element from singly LL is : %d\n",iRet);
}

