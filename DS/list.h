#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>/*to avoid repeat define*/

typedef struct node
{
    int data;
    struct node* next;
}Node;
typedef Node* List;

//function  prototype declaration//

void InitializeList(List* plist);

bool ListIsEmpty(const List* plist);

bool ListIsFull(const List *plist);

unsigned int ListItemCount(const List* plist);

bool AddItem(int data,List* plist);

void Traverse(const List* plist,void(*pfun)(int data));

void EmptyTheList(List* plist);

#endif
