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

int SearchFirstOcc(PNODE First , int iValue)
{
    PNODE temp = First;
    int iCnt =0;
    
    while(temp != NULL )
    {
        iCnt++;
        if(temp-> data == iValue)
        {
            break;
        }
        else
        {
            temp = temp->next;
            if(temp == NULL)
            {
                return 0;
            }    
        }   
    }   
    return iCnt;
    
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

    printf("Enter Input Element : \n");
    scanf("%d",&iElement);
    printf("\n");

    
    iRet = SearchFirstOcc(Head,iElement);

    if(iRet > 0)
    {
        printf("First Occurence of %d from singly LL is : %d\n\n",iElement,iRet);

    }
    else
    {
        printf("Element is not present in LL\n");

    }

    

}

