#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Snode *  Stack;
struct Snode{
    int * data;
    int top;
    int maxsize;
};

Stack creates(int maxsize){
    Stack c;
    c = (Stack)malloc(sizeof(struct Snode));
    c->maxsize = maxsize;
    c->data = (int *)malloc(c->maxsize*(sizeof(int)));
    c->top = -1; 
    return c;   
}

bool isempty(Stack c){
    if(c->top == -1)
        return true;
    else
        return false;
}

bool isfull(Stack c){
    if(c->top == c->maxsize-1)
        return true;
    else
        return false;
}
void push(int n,Stack c){
    if(isfull(c))
        printf("Full!");
    else
        c->data[++c->top] = n;
}

void pop(Stack c){
    if(isempty(c))
        printf("Empty!");
    else
        (c->top)--;
}
int main()
{
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    for(int j=0;j<k;j++){
        int t=1;
        int flag=1;
        Stack s = creates(m);
        int e;
        for(int i=0;i<n;i++){
        scanf("%d",&e);
        while(t <= e && !isfull(s)){
            push(t,s);
            t++;
        }
        if(!isempty(s) && s->data[s->top] == e){
            pop(s);
        }
        else
            flag = 0;
    }
    if(flag == 0)
        printf("NO\n");
    else
        printf("YES\n");
    }
    return 0;
}
