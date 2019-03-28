#include <STDIO.H>
#include <STDLIB.H>
#include "list.h"

void InitalizeList(List* plist)
{
    *plist=NULL;
}

bool ListIsEmpty(const List* plist)
{
    if(plist == NULL)
        return true;
    else
        return false;
}

bool ListIsFull(const List *plist)
{
    Node* pt;
    bool full;
    pt=(Node*)malloc(sizeof(Node));
    if(pt==NULL)
        full=true;
    else
        full=false;
    free(pt);
    return full;
}

unsigned int ListItemCount(const List* plist)
{
    unsigned int count = 0;
    Node * pnode = *plist;

    while(pnode)
    {
        ++count;
        pnode = pnode->next;
    }

    return count;
}

bool AddItem(int data,List* plist)
{
    Node * scan = *plist;
    Node *pnew;
    pnew = (Node*)malloc(sizeof(Node));
    if(pnew == NULL)
        return false;
    pnew->data=data;
    pnew->next = NULL;
    if(scan==NULL)
        *plist = pnew;
    else
    {
        while(scan->next != NULL)
            scan = scan->next;
        scan->next=pnew;
    }
    return true;
    
}

bool InsertItem(List* plist,int i,int data)/*&&*/
{
    Node* scan=*plist; 
}

void Traverse(const List* plist,void(*pfun)(int data));

void EmptyTheList(List* plist);
