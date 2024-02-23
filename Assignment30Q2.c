#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

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

int Pallindrome(int No)
{
    int rem=0;
    int iDigit2=0,iPallindrome=0;
    int iTemp = No;
    
    while(No != 0)
    {
        rem = No % 10;
        iPallindrome = iPallindrome * 10 + rem;
        No = No / 10;

    }
    if(iTemp == iPallindrome)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DisplayPallindrom(PNODE First)
{
    printf("Pallindrome Elements are : ");
    
    while(First != NULL)
    {
        if(Pallindrome(First->data) == true)
        {
            printf("| %d | -> ",First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,414);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);
    DisplayPallindrom(Head);
    
    return 0;
}