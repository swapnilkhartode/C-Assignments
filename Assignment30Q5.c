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

int LargeDigit(int No)
{
    int rem=0;
    int iLarge =0;   // Big Move
   
    while(No != 0)
    {
        rem = No % 10;// 415
        if(rem > iLarge)
        {
            iLarge = rem;
        }
        No = No/10;
    } 
    return iLarge;      
}
void DisplayLarge(PNODE First)
{
    int iRet=0;
    
    while(First != NULL)
    {
        iRet = LargeDigit(First->data);
        printf("| %d | -> ",iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,419);
    InsertFirst(&Head,06);
    InsertFirst(&Head,20);
    InsertFirst(&Head,532);
    InsertFirst(&Head,28);
    InsertFirst(&Head,415);

    Display(Head);
    DisplayLarge(Head);
    
    return 0;
}