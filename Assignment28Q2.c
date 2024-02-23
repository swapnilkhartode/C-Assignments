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

int SearchLastOcc(PNODE First , int iValue)
{
    PNODE temp = First;
    int iCnt =0;
    int LastOcc =0;
    
    
    while(temp != NULL )
    {
        iCnt++;
        if(temp-> data == iValue)
        {
            LastOcc = iCnt;
            temp = temp->next;
            
        }
        else
        {
            temp = temp->next;
             
        }   
    }   
    return LastOcc;
    
}

int main()
{
    PNODE Head = NULL;
    int iRet=0,iElement=0;

    InsertFirst(&Head,101);  // (70,101)
    InsertFirst(&Head,51);
    InsertFirst(&Head,11);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    InsertFirst(&Head,51);
    InsertFirst(&Head,11);

    Display(Head);

    printf("Enter Input Element : \n");
    scanf("%d",&iElement);
    printf("\n");

    
    iRet = SearchLastOcc(Head,iElement);

    if(iRet > 0)
    {
        printf("Last Occurence of %d from singly LL is : %d\n\n",iElement,iRet);

    }
    else
    {
        printf("Element is not present in LL\n");

    }

    

}

