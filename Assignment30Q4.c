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

int SmallDigit(int No)
{
    int rem=0;
    int iSmall =9;   // Big Move
   
    while(No != 0)
    {
        rem = No % 10;// 415
        if(rem < iSmall)
        {
            iSmall = rem;
        }
        No = No/10;
    } 
    return iSmall;      
}
void DisplaySmall(PNODE First)
{
    int iRet=0;
    
    while(First != NULL)
    {
        iRet = SmallDigit(First->data);
        printf("| %d | -> ",iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,89);
    InsertFirst(&Head,06);
    InsertFirst(&Head,20);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,415);

    Display(Head);
    DisplaySmall(Head);
    
    return 0;
}