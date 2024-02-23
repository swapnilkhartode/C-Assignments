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

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iFact=0;

    if(iNo == 1  )
    {
        return 0;
    }
    if(iNo == 2)
    {
        return 1;
    }
    else 
    {
        for(iCnt = 3; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFact++;
                break;
            }  

        }
    }
    if(iFact == 0)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}

void DisplayPrime(PNODE First)
{

    while(First != NULL)
    {
        if(CheckPrime(First->data) == 1)
        {
            printf("%d is a prime number\n",First->data);
        }
        First = First -> next;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,11);
    InsertLast(&Head,20);
    InsertLast(&Head,17);
    InsertLast(&Head,41);
    InsertLast(&Head,22);
    InsertLast(&Head,89);

    DisplayPrime(Head);

    return 0;
}