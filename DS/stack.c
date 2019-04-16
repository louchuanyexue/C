#include<stdio.h>
#include<stdlib.h>
typedef struct Snode* Stack;
struct Snode{
    int* data;
    int top;
    int maxsize;
};

Stack creates(int maxsize){
    Stack s = (Stack)malloc(sizeof(struct Snode));
    s->data = (int*)malloc(sizeof(int)*(s->maxsize));
    s->top = -1;
    s->maxsize = maxsize;
    return s;
}
void pushs(Stack s,int n){
    if(s->top == s->maxsize - 1){
        printf("the stack is full!");
    }
    else{
        s->data[++(s->top)] = n;
    }
}

_Bool isempty(Stack s){
    return (s->top == -1);
}
_Bool isfull(Stack s){
    return (s->top == s->maxsize-1);
}
int pops(Stack s){
    if(s->top == -1){
        printf("the stack is empty!");
    }
    else{
        return s->data[(s->top)--];
    }
}
int main()
{
    Stack s = creates(10);
    pushs(s,7);
    printf("%d",pops(s));
    return 0;
}
